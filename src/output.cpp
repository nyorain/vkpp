// Copyright (c) 2019 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#include "output.hpp"
#include "registry.hpp"
#include "header.hpp"
#include "string.hpp"

#include <iostream>
#include <deque>
#include <algorithm>
#include <cstring>
#include <regex>
#include <unordered_set>
#include <cassert>

// utility
// the outputted copyright for the parsed header
constexpr auto logEnabled = true;

/// log output function
template<typename... Args>
void log(Args... args) {
	using Expand = const int[];
	if(logEnabled) {
		(void) Expand{(std::cerr << args, 0)...};
		std::cerr << "\n";
	}
}

/// string to upper in place
void toupperip(std::string& str) {
	if (str.length()==0)
		return;
	static const auto& f = std::use_facet<std::ctype<char>>(std::locale());
	f.toupper(&str.front(), &str.back() + 1);
}

/// string to upper in copy
std::string toupper(const std::string& str) {
	auto ret = str;
	toupperip(ret);
	return ret;
}

// generator
std::string OutputGenerator::strip(const std::string& string) const {
	auto ret = string;
	stripip(ret);
	return ret;
}

void OutputGenerator::stripip(std::string& string) const {
	camelCase(string);
	removeVkPrefixInPlace(string);
	removeExtSuffixInPlace(registry(), string);
}

void OutputGenerator::macroCaseip(std::string& string) const {
	std::size_t pos = 0u;
	while(pos < string.size()) {
		for(auto& c : string.substr(pos)) {
			if(std::isupper(c, std::locale())) {
				break;
			}
			pos++;
		}

		string.insert(pos, 1, '_');
		pos += 1;
	}

	toupperip(string);
}

std::string OutputGenerator::macroCase(const std::string& string) const {
	auto ret = string;
	macroCaseip(ret);
	return ret;
}

CCOutputGenerator::CCOutputGenerator(Registry& reg, const CCOutputGeneratorSettings& settings)
		: OutputGenerator(reg) {

	auto& fold = settings.outputFolder;
	enums_.open(fold + "/enums.hpp", std::ios_base::out | std::ios_base::binary);
	fwd_.open(fold + "/fwd.hpp", std::ios_base::out | std::ios_base::binary);
	structs_.open(fold + "/structs.hpp", std::ios_base::out | std::ios_base::binary);
	dispatch_.open(fold + "/dispatch.hpp", std::ios_base::out | std::ios_base::binary);
	dispatchSrc_.open(fold + "/dispatch.cpp", std::ios_base::out | std::ios_base::binary);
	enumNames_.open(fold + "/names.hpp", std::ios_base::out | std::ios_base::binary);
	rawf_.open(fold + "/functions.hpp", std::ios_base::out | std::ios_base::binary);
}

void CCOutputGenerator::generate() {
	outputAll(header);
	auto version = std::string(registry().version);

	// headers from header.hpp
	fwd_ << std::regex_replace(fwdHeader, std::regex("%vp"), version);
	structs_ << std::regex_replace(structsHeader, std::regex("%vp"), version);
	enums_ << std::regex_replace(enumsHeader, std::regex("%vp"), version);
	enumNames_ << std::regex_replace(namesHeader, std::regex("%vp"), version);
	rawf_ << std::regex_replace(rawFunctionsHeader, std::regex("%vp"), version);

	outputAll("namespace vk {\n");
	outputAll("\n");

	// fwd dummy enum
	fwd_ << "using nytl::Flags; // flags.hpp\n\n";

	fwd_ << "enum class DummyEnum : int32_t {};\n\n";

	// name function for dummy Enum flags
	enumNames_ << "inline std::string name(nytl::Flags<DummyEnum>) { return {}; } \n\n";

	// all printed requirements
	Requirements fulfilled;

	// output the default vulkan feature
	struct {
		const char* name;
		bool forceDispatch;
	} features[] = {
		{"VK_VERSION_1_4", true},
		{"VK_VERSION_1_3", true},
		{"VK_VERSION_1_2", true},
		{"VK_VERSION_1_1", true},
		{"VK_VERSION_1_0", false},
	};

	std::unordered_set<std::string> avoidExts = {
		"VK_NV_external_memory_rdma",
		"VK_EXT_global_priority_query",
		"VK_EXT_global_priority",
		"VK_NV_ray_tracing_motion_blur", // TODO: fix bitfields
	};

	std::unordered_set<std::string_view> seen;

	for(auto f : features) {
		std::vector<std::string_view> worklist {f.name};

		while(!worklist.empty()) {
			log("Checking feature ", f.name);

			auto next = worklist.back();
			worklist.pop_back();

			if (seen.count(next)) {
				continue;
			}

			auto pf = registry().findFeatureByName(std::string(next));
			if (!pf) {
				log("Invalid feature ", f.name);
				continue;
			}

			auto& feature = *pf;
			if (!feature.depends.empty()) {
				worklist.push_back(next);

				auto allDone = true;
				for (auto& d : feature.depends) {
					if (!seen.count(d)) {
						log(">> depends ", f.name);
						allDone = false;
						worklist.push_back(d);
					}
				}

				if (!allDone) {
					continue;
				}

				worklist.pop_back();
			}

			auto& reqs = feature.reqs;

			printReqs(reqs, fulfilled, "", f.forceDispatch);
			fulfilled.add(reqs);

			// output extensions
			for(auto& ext : feature.extensions) {
				if(avoidExts.count(ext->name)) continue;

				auto guard = ext->platform ? ext->platform->protect : "";
				printReqs(ext->reqs, fulfilled, guard, true);
				fulfilled.add(ext->reqs);
			}

			seen.insert(next);
		}
	}

	// TODO: other extensions
	for(auto& ext : registry().extensions) {
		if(avoidExts.count(ext.name)) continue;

		auto& reqs = ext.reqs;
		auto guard = ext.platform ? ext.platform->protect : "";
		printReqs(reqs, fulfilled, guard, true);
		fulfilled.add(reqs);
	}

	// end the header files
	outputAll("\n} // namespace vk\n\n");

	outputAll("// The specification (vk.xml) itself is published under the following license:\n");
	outputAll(registry().copyright);

	fwd_ << "\n\n";

	// dispatch.hpp
	std::string dispatch = dispatchHeader;

	dispatch = std::regex_replace(dispatch, std::regex("%vp"), version);
	dispatch = std::regex_replace(dispatch, std::regex("%decl"), dispatchDecl_);
	dispatch = std::regex_replace(dispatch, std::regex("%guardedDecl"), dispatchDeclGuarded_);

	dispatch_ << header;
	dispatch_ << dispatch;
	dispatch_ << "// The specification (vk.xml) itself is published under the following license:\n";
	dispatch_ << registry().copyright;

	// dispatch.cpp
	dispatch = dispatchSrc;

	dispatch = std::regex_replace(dispatch, std::regex("%vp"), version);
	dispatch = std::regex_replace(dispatch, std::regex("%loadIni"), dispatchLoadIni_);
	dispatch = std::regex_replace(dispatch, std::regex("%loadDev"), dispatchLoadDev_);

	dispatchSrc_ << dispatch;
	dispatchSrc_ << "// The specification (vk.xml) itself is published under the following license:\n";
	dispatchSrc_ << registry().copyright;
}

void CCOutputGenerator::outputAll(const std::string& string) {
	fwd_ << string;
	structs_ << string;
	enums_ << string;
	enumNames_ << string;
	rawf_ << string;
}

void CCOutputGenerator::printReqs(Requirements& reqs, const Requirements& fulfilled,
		const std::string& guard, bool forceDispatch) {

	auto fwdGuard = false;
	auto enumGuard = false;
	auto structGuard = false;
	auto nameGuard = false;
	auto rawfGuard = false;

	auto dispatchDeclGuard = false;
	auto dispatchDevGuard = false;
	auto dispatchIniGuard = false;

	// order:
	// - constants
	// - handles
	// - basetypes
	// - enums
	// - bitmasks
	// - structs
	// - aliases

	// constants
	auto count = 0u;
	for(auto& constant : reqs.constants) {

		// only handle not yet fulfilled constants
		auto it = std::find(fulfilled.constants.cbegin(), fulfilled.constants.cend(), constant);
		if(it != fulfilled.constants.cend()) continue;

		ensureGuard(fwd_, fwdGuard, guard);
		auto name = constantName(*constant);

		// NOTE: workaround for predefined constants (true/false)
		if(name == "true" || name == "false") continue;
		++count;

		fwd_ << "constexpr auto " << name << " = " << constant->value << ";\n";
	}

	if(count > 0) {
		log("\tGenerated ", count, " constants\n");
		fwd_ << "\n";
	}

	// handles
	count = 0u;
	auto types = reqs.types;
	for(auto i = 0; i < static_cast<int>(types.size()); ++i) {
		auto& type = *types[i];

		// remove duplicate types
		// only done in this loop, since this is the first type enitity loop
		auto it = std::find(fulfilled.types.cbegin(), fulfilled.types.cend(), &type);
		if(it != fulfilled.types.cend()) {
			types.erase(types.begin() + i);
			--i;
			continue;
		}

		if(type.category != Type::Category::handle)
			continue;

		auto& handle = static_cast<const Handle&>(type);
		++count;

		ensureGuard(fwd_, fwdGuard, guard);

		// output handle macro to fwd
		auto name = typeName(type);
		fwd_ << handle.type << "(" << name << ")" << "\n";
	}

	if(count > 0) {
		log("\tGenerated ", count, " handles");
		fwd_ << "\n";
	}

	// basetypes
	count = 0u;
	for(auto* typeit : types) {
		if(typeit->category != Type::Category::basetype) continue;
		auto& basetype = static_cast<BaseType&>(*typeit);
		if(basetype.alias) continue;

		if(basetype.name == "VkFlags") continue;

		++count;
		ensureGuard(fwd_, fwdGuard, guard);

		if (!basetype.original) {
			continue;
		}

		// fwd
		auto name = typeName(basetype);
		auto orig = basetype.original->name;

		// TODO FIXME fix bitfields
		if (orig == "AccelerationStructureInstanceKHR") {
			continue;
		}

		fwd_ << "using " << name << " = " << orig << ";\n";
	}

	if(count > 0) {
		log("\tGenerated ", count, " typedefs");
		fwd_ << "\n";
	}

	// enums
	count = 0u;
	for(auto* typeit : types) {
		if(typeit->category != Type::Category::enumeration) continue;
		auto& enumeration = static_cast<Enum&>(*typeit);
		auto name = typeName(enumeration);

		++count;
		ensureGuard(fwd_, fwdGuard, guard);
		ensureGuard(enums_, enumGuard, guard);
		ensureGuard(enumNames_, nameGuard, guard);

		auto type = "int32_t";
		auto shiftBase = "1";

		if(enumeration.bitwidth == 64) {
			type = "int64_t";
			shiftBase = "int64_t(1)";
		}

		fwd_ << "enum class " << name << " : " << type << ";\n";

		// output enum values
		enums_ << "enum class " << name << " : " << type << " {\n";
		std::unordered_set<std::string> already {};
		auto sepr = "";
		for(auto& value : enumeration.values) {
			auto n = enumName(enumeration, value.name);
			if(!already.insert(n).second) {
				// doubled
				continue;
			}

			enums_ << sepr << "\t" << n << " = ";
			if(value.bit) enums_ << "(" << shiftBase << " << " << value.value << ")";
			else enums_ << value.value;
			sepr = ",\n";
		}

		enums_ << "\n};\n";

		if(enumeration.bitmask) enums_<< "NYTL_FLAG_OPS(" << name << ")\n";
		enums_ << "\n";

		// output names
		enumNames_ << "inline const char* name(" << name << " val) {\n";
		enumNames_ << "\tswitch(val) {\n";
		std::unordered_set<std::int32_t> alreadyVals {};
		std::unordered_set<std::int32_t> alreadyBits {};
		for(auto& value : enumeration.values) {
			auto n = enumName(enumeration, value.name);

			// doubled
			if(!value.bit && !alreadyVals.insert(value.value).second) {
				continue;
			}
			if(value.bit && !alreadyBits.insert(value.value).second) {
				continue;
			}

			enumNames_ << "\t\tcase " << name << "::" << n << ": return \"" << n << "\";\n";
		}

		enumNames_ << "\t\tdefault: return nullptr;\n";
		enumNames_ << "\t}\n}\n";
	}

	if(count > 0) {
		log("\tGenerated ", count, " enums");
		fwd_ << "\n";
		enums_ << "\n";
	}

	// bitmasks
	count = 0u;
	for(auto* typeit : types) {
		if(typeit->category != Type::Category::bitmask) continue;
		auto& bitmask = static_cast<Bitmask&>(*typeit);
		++count;

		auto name = typeName(bitmask);
		ensureGuard(fwd_, fwdGuard, guard);
		ensureGuard(enumNames_, nameGuard, guard);

		std::string enumName;
		if(!bitmask.bits) enumName = "DummyEnum";
		else enumName = typeName(*bitmask.bits);

		fwd_ << "using " << name << " = Flags<" << enumName << ">;\n";

		// output names
		if(bitmask.bits) {
			enumNames_ << "inline std::string name(" << name;

			auto& enumeration = *bitmask.bits;
			if(!enumeration.values.empty()) {
				enumNames_ << " val";
			}
			enumNames_ << ") {\n";

			enumNames_ << "\tstd::string ret;\n";
			std::unordered_set<std::int32_t> alreadyVals {};
			std::unordered_set<std::int32_t> alreadyBits {};
			for(auto& value : enumeration.values) {
				auto n = this->enumName(enumeration, value.name);
				// doubled
				if(!value.bit && !alreadyVals.insert(value.value).second) {
					continue;
				}
				if(value.bit && !alreadyBits.insert(value.value).second) {
					continue;
				}

				auto qname = enumName + "::" + n;
				enumNames_ << "\tif((val & " << qname << ") == " << qname << ") ret += \"" << n << " | \";\n";
			}

			enumNames_ << "\tif(!ret.empty()) ret.erase(ret.size() - 2, 2);\n";
			enumNames_ << "\treturn ret;\n";
			enumNames_ << "\n}\n";
		}
	}

	if(count > 0) {
		log("\tGenerated ", count, " bitmasks");
		fwd_ << "\n";
	}

	// structs
	count = 0u;
	for(auto* typeit : types) {
		if(typeit->category != Type::Category::structure) continue;
		auto& structure = static_cast<Struct&>(*typeit);
		++count;

		ensureGuard(fwd_, fwdGuard, guard);
		ensureGuard(structs_, structGuard, guard);
		printStruct(structure);
	}

	if(count > 0) {
		log("\tGenerated ", count, " structs");
		fwd_ << "\n";
		structs_ << "\n";
	}

	// aliases
	count = 0u;
	for(auto* typeit : types) {
		if(typeit->category != Type::Category::basetype) continue;
		auto& basetype = static_cast<BaseType&>(*typeit);
		if(!basetype.alias) continue;

		if(basetype.name == "VkFlags") continue;

		++count;
		ensureGuard(fwd_, fwdGuard, guard);

		// fwd
		auto name = typeName(basetype);
		auto orig = typeName(*basetype.original);

		// TODO FIXME fix bitfields
		if (orig == "AccelerationStructureInstanceKHR") {
			continue;
		}

		fwd_ << "using " << name << " = " << orig << ";\n";
	}

	// NOTE: funcptrs would go here
	// NOTE: extra funcptrs (req.funcPtr) would go here
	//   we currently don't output function pointers since using them
	//   with vk:: types instead of the original vulkan ones is
	//   undefined behaviour and might seriously go wrong.

	// commands
	count = 0u;
	for(auto* cmdit : reqs.commands) {
		auto it = std::find(fulfilled.commands.begin(), fulfilled.commands.end(), cmdit);
		if(it != fulfilled.commands.end()) {
			continue;
		}

		++count;
		ensureGuard(rawf_, rawfGuard, guard);

		ensureGuard(dispatchDeclGuarded_, dispatchDeclGuard, guard);
		ensureGuard(dispatchLoadIni_, dispatchIniGuard, guard);
		ensureGuard(dispatchLoadDev_, dispatchDevGuard, guard);

		printCmd(*cmdit, "", forceDispatch, !guard.empty());

		for(auto alias : cmdit->aliases) {
			printCmd(*cmdit, alias, forceDispatch, !guard.empty());
		}
	}

	if(count > 0) {
		log("\tGenerated ", count, " commands");
	}

	// end all open requirements guards
	endGuard(structs_, structGuard, guard);
	endGuard(fwd_, fwdGuard, guard);
	endGuard(enums_, enumGuard, guard);
	endGuard(enumNames_, nameGuard, guard);
	endGuard(rawf_, rawfGuard, guard);

	endGuard(dispatchDeclGuarded_, dispatchDeclGuard, guard);
	endGuard(dispatchLoadIni_, dispatchIniGuard, guard);
	endGuard(dispatchLoadDev_, dispatchDevGuard, guard);
}

void CCOutputGenerator::ensureGuard(std::string& str, bool& guardVar, const std::string& guard)
{
	if(!guardVar) {
		if(!guard.empty()) str += "\n#ifdef " + guard + "\n";
		guardVar = true;
	}
}

void CCOutputGenerator::ensureGuard(std::ofstream& of, bool& guardVar, const std::string& guard)
{
	if(!guardVar) {
		if(!guard.empty())of << "\n#ifdef " << guard << "\n";
		guardVar = true;
	}
}

void CCOutputGenerator::endGuard(std::ofstream& of, bool guardVar, const std::string& guard)
{
	if(guardVar && !guard.empty()) {
		of << "#endif //" << guard << "\n\n";
	}
}

void CCOutputGenerator::endGuard(std::string& of, bool guardVar, const std::string& guard)
{
	if(guardVar && !guard.empty()) {
		of += "#endif //" + guard + "\n\n";
	}
}

std::string CCOutputGenerator::enumName(const Enum& e, const std::string& name, bool* bit) const
{
	if(bit) *bit = false;

	auto ret = removeVkPrefix(name, nullptr);
	camelCaseInPlace(ret);

	// prefixes and suffixes
	auto removePrefix = 0u;
	auto removeSuffix = 0u;

	{
		std::string ext;
		removeExtSuffix(registry(), e.name, &ext);

		auto fename = toLower(typeName(e)); // fixed enum name
		auto bpos = fename.rfind("bit");
		if(bpos != std::string::npos) fename = fename.substr(0, bpos);
		else fename = fename.substr(0, fename.size() - ext.size());

		// if(fename.substr(fename.size() - 4) == "bits") fename = fename.substr(0, fename.size() - 4);
		auto fname = toLower(ret); // fixed name

		// TODO: better check for common prefix: don't compare char for char but
		// rather word for word (words are seperated by an underscore) (?)

		auto s = 0u;
		while(fename.size() > s && fname.size() > s && fename[s] == fname[s]) ++s;

		removePrefix = s;

		if(toLower(ret).find(toLower(ext)) != std::string::npos) {
			removeSuffix = ext.size();
		}

		// actuallly remove prefix and suffix, lower first char
		ret = ret.substr(removePrefix);
		ret = ret.substr(0, ret.size() - removeSuffix);
		ret[0] = std::tolower(ret[0], std::locale());

		// remove "Bit" from bitmask enums
		bpos = ret.rfind("Bit");
		if(e.bitmask && bpos != std::string::npos) {
			if(bit) *bit = true;
			ret = ret.erase(bpos, 3);
		}
	}

	// 'e' prefix if it is a number
	if(std::isdigit(ret[0], std::locale())) ret.insert(0, 1, 'e');

	// NOTE: hack/workaround for 'WordIDWord' struct and WORD_ID_WORD enum.
	// in this case the enum value name is wrongly generated (WordIdWord) and does
	// not match the (correct) structure name since this information is not
	// preserved. Rather a temporary workaround here.
	auto idPos = ret.find("Id");
	if(idPos != std::string::npos) {
		ret[idPos + 1] = 'D';
	}

	// make sure it is no keyword
	// keywords defined in header.hpp
	for(auto& word : keywords) {
		if(std::string(word) == ret) {
			ret.insert(0, 1, 'e');
			ret[1] = std::toupper(ret[1], std::locale());
			break;
		}
	}

	// capitalize extension prefixes
	std::string ext;
	removeExtSuffix(registry(), ret, &ext);
	if(!ret.empty())
		for(auto i = 0u; i < ext.size(); ++i)
			ret[ret.size() - i] = std::toupper(ret[ret.size() - i], std::locale());

	// TODO: custom fix for spec defect
	// if(name == "VK_PIPELINE_CREATE_DISPATCH_BASE" && bit) {
	// 	*bit = true;
	// }

	return ret;
}

std::string CCOutputGenerator::typeName(const Type& type) const {
	auto ret = removeVkPrefix(type.name, nullptr);

	auto it = &type;
	while(it->category == Type::Category::basetype) {
		auto& bt = static_cast<const BaseType&>(*it);
		if (!bt.original) {
			break;
		}
		it = bt.original;
	}

	if(it->category == Type::Category::enumeration) {
		auto& e = static_cast<const Enum&>(*it);
		std::size_t pos;
		if(e.bitmask && (pos = ret.find("FlagBits")) != std::string::npos)
			ret.erase(pos, 4); // erase "Flag" from the name
	} else if(it->category == Type::Category::funcptr) {
		return type.name;
		// We don't have custom function pointers but use the ones
		// from vulkan.h (everything else is undefined behavior.)
		/*
		ret.erase(0, 6); // erase PFN_vk from beginning
		ret.insert(0, "Pfn");
		*/
	}

	return ret;
}

std::string CCOutputGenerator::typeName(const QualifiedType& type, bool change) const {
	std::string ret;
	if(type.type) {
		ret = type.type->name;
		if(change && type.type->category != Type::Category::external) {
			ret = typeName(*type.type);
		} else {
			ret = type.type->name;
		}

		if(type.constant) {
			ret = "const " + ret;
		}
		if(type.reference) {
			ret += "&";
		}
	} else if(type.pointer) {
		ret = typeName(*type.pointer, change);
		ret += "*";
		if(type.constant) {
			ret += " const";
		}
	} else if(type.array) {
		ret = typeName(*type.array, change);
	} else {
		std::cerr << "### CCOG::typeName: invalid QualifiedType object\n";
		return "--- unknown ---";
	}

	return ret;
}

std::string CCOutputGenerator::constantName(const Constant& c) const
{
	auto ret = removeVkPrefix(c.name, nullptr);
	camelCaseInPlace(ret);

	// capitalize suffix
	std::string ext;
	removeExtSuffix(registry(), ret, &ext);
	if(!ret.empty())
		for(auto i = 0u; i < ext.size(); ++i)
			ret[ret.size() - i] = std::toupper(ret[ret.size() - i], std::locale());

	return ret;
}

std::string CCOutputGenerator::paramName(const Param& param, const std::string& namePrefix,
	bool plainArray) const
{
	std::string ret;

	auto it = &param.type;
	while(!plainArray && it->array) {
		ret += "std::array<";
		it = it->array;
	}

	ret += typeName(param.type);

	std::deque<std::string> ranges;
	it = &param.type;

	while(it->array) {
		std::string sizeName = it->arraySize;
		auto pos = sizeName.find("VK");
		if(pos != std::string::npos) {
			removeVkPrefixInPlace(sizeName);
			camelCaseInPlace(sizeName);

			// capitalize extension prefixes
			std::string ext;
			removeExtSuffix(registry(), sizeName, &ext);
			for(auto i = 0u; i < ext.size(); ++i)
				sizeName[sizeName.size() - i] =
					std::toupper(sizeName[sizeName.size() - i], std::locale());
		}

		ranges.push_back(sizeName);
		it = it->array;
	}

	while(!ranges.empty()) {
		if(plainArray) ret += "[" + ranges.front() + "]";
		else ret += ", " + ranges.front() + ">";
		ranges.pop_front();
	}

	ret += " " + namePrefix + param.name;

	return ret;
}

void CCOutputGenerator::printStruct(const Struct& type)
{
	auto name = typeName(type);

	// TODO FIXME fix bitfields!
	if (name == "AccelerationStructureInstanceKHR" ||
			name == "AccelerationStructureMotionInstanceDataNV") {
		return;
	}

	auto nameFirstLower = name;
	nameFirstLower[0] = std::tolower(nameFirstLower[0], std::locale());

	std::string metaType = "struct";
	if(type.isUnion) metaType = "union";

	fwd_ << metaType << " " << name << ";\n";
	structs_ << metaType << " " << name << " {\n";

	bool unionInit = false;
	auto sepr = "";
	std::string paramList;
	std::string initList;
	bool printCtor = false;

	// print all members
	for(auto& member : type.members) {
		auto mtype = typeName(member.type);
		auto mname = member.name;

		// member declaration
		std::string init = "";
		if(member.name == "sType") {
			auto name = member.node.attribute("values");
			if (name) {
				auto sTypeEnum = *registry().findEnum("VkStructureType");
				init = "StructureType::" + enumName(sTypeEnum, name.as_string());
			}
		}

		structs_ << "\t" << paramName(member);
		if(!type.isUnion || !unionInit)
			structs_ << " {" << init << "}";

		unionInit = true;
		structs_ << ";\n";

		if(member.name == "sType" || member.name == "pNext") {
			printCtor = true;
			continue;
		}

		paramList += sepr + paramName(member, "x") + " = {}"; //ctor params
		initList += sepr + mname + "(x" + mname + ")"; //initializer

		sepr = ", ";
	}

	// init ctor
	// there will only be an init constructor if the type isnt union, and there
	// are members like pNext or structureType, otherwise uniform init can be
	// used to init the members
	// if the struct is returnedonly there is also no need for a constructor
	if(printCtor && !type.returnedonly && !type.isUnion) {
		structs_ << "\n\tconstexpr " << name << "(" << paramList << ")";
		if(!initList.empty()) structs_ << " : " << initList;
		structs_ << " {}\n";
	}

	// TODO: union ctors that initialize the different members?
	// explicit conversion function (useful if passed as pointer)
	structs_ << "\n\tconst " << type.name << "& vkHandle() const { return reinterpret_cast<const "
			<< type.name << "&>(*this); }\n";

	structs_ << "\t" << type.name << "& vkHandle() { return reinterpret_cast<"
			<< type.name << "&>(*this); }\n";

	// conversion operator
	structs_ << "\n\toperator const " << type.name << "&() const { return vkHandle(); };\n";
	structs_ << "\toperator " << type.name << "&() { return vkHandle(); };\n";
	structs_ << "};\n\n";
}

void CCOutputGenerator::printCmdRaw(const Command& cmd, std::string alias,
		bool forceDispatch) {
	if(alias == "") {
		alias = cmd.name;
	}
	auto name = removeVkPrefix(alias, nullptr);
	name[0] = std::tolower(name[0], std::locale());

	rawf_ << "inline " << typeName(cmd.signature.returnType) << " " << name << "(";

	auto sepr = "";
	std::string args;

	// iterate over parameters and output their declarations
	// append thei call usage to args
	for(auto& param : cmd.signature.params) {
		rawf_ << sepr << typeName(param.type) << " " << param.name;
		if(param.type.array) {
			rawf_ << "[ " << param.type.arraySize << "]";
		}

		// argument
		args += sepr;

		// cast-conversion
		Type::Category category {};
		std::string name {};
		if(param.type.type) {
			category = param.type.type->category;

			auto* type = param.type.type;
			while (type && category == Type::Category::basetype) {
				auto& basetype = static_cast<BaseType&>(*type);
				if (basetype.alias && basetype.original) {
					type = basetype.original;
					category = type->category;
				} else {
					type = nullptr;
				}
			}

			name = param.type.type->name;
		} else {
			auto it = &param.type;
			while(!it->type) {
				if(it->pointer) it = it->pointer;
				if(it->array) it = it->array;
			}

			category = it->type->category;
			name = it->type->name;
		}

		if(param.type.pointer ||
				category == Type::Category::handle ||
				category == Type::Category::enumeration ||
				category == Type::Category::bitmask) {
			if(param.type.array) {
				args += "(";
				args += typeName(param.type, false);
				args += "*)(";
				args += param.name;
				args += ")";
			} else {
				args += "(";
				args += typeName(param.type, false);
				args += ")(";
				args += param.name;
				args += ")";
			}
		} else {
			args += param.name;
		}

		sepr = ", ";
	}

	rawf_ << sepr << "DynamicDispatch* dispatcher = {}";

	std::string before = "";
	std::string after = "";

	before += "return ";
	before += "(";
	before += typeName(cmd.signature.returnType);
	before += ")(";
	before += forceDispatch ? "VKPP_DISPATCH_GLOBAL(" : "VKPP_DISPATCH(";

	after = "));";

	rawf_ << "){ ";
	rawf_ << before << "dispatcher, " << alias << sepr << args;
	rawf_ << after << " }\n";
}

void CCOutputGenerator::printCmd(const Command& cmd, std::string alias,
		bool forceDispatch, bool guarded) {
	printCmdRaw(cmd, alias, forceDispatch);

	if(alias == "") {
		alias = cmd.name;
	}
	auto name = removeVkPrefix(alias, nullptr);
	name[0] = std::tolower(name[0], std::locale());

	// add to dispatcher
	{
		auto& declDst = guarded ? dispatchDeclGuarded_ : dispatchDecl_;

		declDst += "\t";
		declDst += "PFN_";
		declDst += alias;
		declDst += " ";
		declDst += alias;
		declDst += " {};\n";

		auto firstParamType = cmd.signature.params[0].type.type;
		// NOTE: might need to be adjusted for more function catogories
		static std::unordered_set<std::string_view> devTypes {"VkDevice", "VkQueue", "VkCommandBuffer"};
		if(firstParamType && devTypes.find(firstParamType->name) != devTypes.end()) {
			dispatchLoadDev_ += "\t\tVKPP_LOAD(";
			dispatchLoadDev_ += alias;
			dispatchLoadDev_ += ");\n";
		} else {
			dispatchLoadIni_ += "\tVKPP_LOAD(";
			dispatchLoadIni_ += alias;
			dispatchLoadIni_ += ");\n";
		}
	}
}
