// Copyright (c) 2017 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#include "registry.hpp"

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <locale>

constexpr auto logEnabled = false;

/// log output function
template<typename... Args>
void log(Args... args) {
	using Expand = const int[];
	if(logEnabled) {
		(void) Expand{(std::cerr << args, 0)...};
		std::cerr << "\n";
	}
}

RegistryLoader::RegistryLoader(const std::string& xmlPath) {
	// we first check whether the file exists
	std::ifstream test(xmlPath);
	if(!test.is_open()) {
		throw std::runtime_error("Cannot open vulkan spec '" + xmlPath +
			"'. Check the version provided is valid or manually add the file.");
	}

	// parse it
	auto result = doc_.load_file(xmlPath.c_str());
	std::cout << "Load result: " << result.description() << "\n";
}

Registry& RegistryLoader::parse() {
	// registry
	auto regNode = doc_.child("registry");

	auto& cr = registry_.copyright;
	cr = regNode.child_value("comment");
	auto pos = cr.find('\n');

	// exclude last newline
	while(cr.find('\n', pos + 1) != std::string::npos) {
		cr.insert(pos + 1, "// ");
		pos = cr.find('\n', pos + 1);
	}

	// vendors
	for(auto vendor : regNode.child("vendorids").children("vendorid")) {
		registry_.vendors.push_back(vendor.attribute("name").as_string());
	}

	// platforms
	log("\tplatforms");
	loadPlatforms(regNode.child("platforms"));

	// tags
	for(auto tag : regNode.child("tags").children("tag")) {
		registry_.tags.push_back(tag.attribute("name").as_string());
	}

	// types
	log("\ttypes");
	auto types = regNode.child("types");
	loadTypes(types);

	// version
	for(auto define : regNode.child("types")) {
		if(std::strcmp(define.attribute("category").as_string(), "define")) {
			continue;
		}

		auto name = define.child("name");
		if(!name || std::strcmp(name.text().as_string(), "VK_HEADER_VERSION")) {
			continue;
		}

		registry_.version = name.next_sibling().text().as_string();
		if(registry_.version[0] == ' ') {
			registry_.version.erase(0, 1);
		}

		break;
	}

	// enums
	log("\tenums");
	for(auto enumit : regNode.children("enums")) {
		loadEnums(enumit);
	}

	// commands
	log("\tcommands");
	auto commands = regNode.child("commands");
	loadCommands(commands);

	// features
	log("\tfeatures");
	for(auto feature : regNode.children("feature")) {
		loadFeature(feature);
	}

	// extensions
	log("\textensions");
	for(auto extension : regNode.child("extensions").children("extension")) {
		loadExtension(extension);
	}

	return registry_;
}

void RegistryLoader::loadPlatforms(const pugi::xml_node& node) {
	for(auto it : node.children("platform")) {
		Platform platform;
		platform.node = node;
		platform.name = it.attribute("name").as_string();
		platform.protect = it.attribute("protect").as_string();
		registry_.platforms.push_back(platform);
		log("\t\tplatform: ", platform.name);
	}
}

void RegistryLoader::loadTypes(const pugi::xml_node& node) {
	// all plain && external types
	for(auto typeit : node.children("type")) {
		std::string category = typeit.attribute("category").as_string();
		std::string reqs = typeit.attribute("requires").as_string();
		auto name = typeit.attribute("name").as_string();
		if(category == "" && reqs != "") {
			ExternalType ext(name, typeit);
			registry_.externalTypes.push_back(ext);
			log("\t\texternal: ", name);
		} else if(category == "" && reqs == "") {
			Type type(Type::Category::plain, name, typeit);
			registry_.plainTypes.push_back(type);
			log("\t\tplain type: ", name);
		}
	}

	// all enums and typedefs
	for(auto typeit : node.children("type")) {
		std::string category = typeit.attribute("category").as_string();
		if(category == "enum") {
			auto name = typeit.attribute("name").as_string();
			auto alias = typeit.attribute("alias");
			if(alias) {
				BaseType t(name, typeit);
				t.original = registry_.findType(alias.as_string());
				t.alias = true;
				registry_.baseTypes.push_back(t);
				continue;
			}

			registry_.enums.emplace_back(name, typeit);

			log("\t\tenum: ", name);
		} else if(category == "basetype") {
			auto name = typeit.child_value("name");
			auto basetype = typeit.child_value("type");
			BaseType t(name, typeit);
			t.original = registry_.findType(basetype);
			registry_.baseTypes.push_back(t);

			log("\t\tbasetypes: ", name);
		}
	}

	// then all bitmasks
	for(auto typeit : node.children("type")) {
		std::string category = typeit.attribute("category").as_string();
		if(category == "bitmask") {
			auto en = typeit.attribute("requires");
			auto name = typeit.child_value("name");
			auto alias = typeit.attribute("alias");
			if(alias) {
				name = typeit.attribute("name").as_string();
				BaseType t(name, typeit);
				t.original = registry_.findType(alias.as_string());
				t.alias = true;
				registry_.baseTypes.push_back(t);
				continue;
			}

			Enum* e = nullptr;
			if(en) e = registry_.findEnum(en.as_string());

			registry_.bitmasks.emplace_back(name, typeit);
			if(e) registry_.bitmasks.back().bits = e;

			log("\t\tbitmask: ", name);
		}
	}

	// then all handles
	for(auto typeit : node.children("type")) {
		std::string category = typeit.attribute("category").as_string();
		if(category == "handle") {
			auto name = typeit.child_value("name");
			auto alias = typeit.attribute("alias");
			if(alias) {
				name = typeit.attribute("name").as_string();
				BaseType t(name, typeit);
				t.alias = true;
				t.original = registry_.findType(alias.as_string());
				registry_.baseTypes.push_back(t);
				continue;
			}

			Handle handle(name, typeit);
			handle.type = typeit.child_value("type");
			registry_.handles.push_back(handle);

			log("\t\thandle: ", name);
		}
	}

	// then all structs prototypes
	for(auto typeit : node.children("type")) {
		std::string category = typeit.attribute("category").as_string();
		if(category == "struct" || category == "union") {
			auto name = typeit.attribute("name").as_string();
			auto alias = typeit.attribute("alias");
			if(alias) {
				BaseType t(name, typeit);
				t.alias = true;
				t.original = registry_.findType(alias.as_string());
				registry_.baseTypes.push_back(t);
				continue;
			}

			Struct s(name, typeit);

			if(category == "union") s.isUnion = true;
			if(std::string(typeit.attribute("returnedonly").as_string()) == "true") s.returnedonly = true;

			registry_.structs.push_back(s);

			log("\t\tstruct: ", name);
		}
	}

	// then all func pointers
	for(auto typeit : node.children("type")) {
		std::string category = typeit.attribute("category").as_string();
		if(category == "funcpointer") {
			auto name = typeit.child_value("name");
			auto alias = typeit.attribute("alias");
			if(alias) {
				BaseType t(name, typeit);
				t.alias = true;
				t.original = registry_.findType(alias.as_string());
				registry_.baseTypes.push_back(t);
				continue;
			}

			FuncPtr ptr(name, typeit);

			// - parse return type -
			// get rid of "typedef " prefix and " (VKAPI_PTR *" suffix
			auto retString = std::string(typeit.text().as_string()).substr(8, std::string::npos);
			retString = retString.substr(0, retString.size() - 13);

			auto constPos = retString.find("const");
			if(constPos != std::string::npos) {
				ptr.signature.returnType.constant = true;
				retString = retString.substr(constPos + 6, std::string::npos);
			}

			auto firstPtr = retString.find("*");
			bool hasPtr = (firstPtr != std::string::npos);

			auto beforeConst = retString.find("const ");
			auto retTypeName = retString.substr(0, firstPtr);

			// const type
			if(beforeConst != std::string::npos && (!hasPtr || beforeConst < firstPtr)) {
				retTypeName = retTypeName.substr(beforeConst + 6);
				ptr.signature.returnType.constant = true;
			}

			// type const
			auto afterConst = retString.find(" const");
			if(afterConst != std::string::npos && (!hasPtr || afterConst < firstPtr)) {
				retTypeName = retTypeName.substr(0, afterConst);
				ptr.signature.returnType.constant = true;
			}

			auto type = registry_.findType(retTypeName);
			if(!type) {
				std::cout << "### fptr:1: Couldnt find type " << retString << "\n";
				continue;
			}

			ptr.signature.returnType.type = type;

			// parse return pointers
			auto prevPtr = firstPtr;
			while(prevPtr != std::string::npos) {
				auto nextPtr = retString.find("*", prevPtr + 1);
				bool hasNext = nextPtr != std::string::npos;

				registry_.qualifieds.push_back(ptr.signature.returnType);
				ptr.signature.returnType = {};
				ptr.signature.returnType.pointer = &registry_.qualifieds.back();

				auto nextConst = retString.find("const", prevPtr);
				if(nextConst != std::string::npos && (!hasNext || nextConst < nextPtr))
					ptr.signature.returnType.constant = true;

				prevPtr = nextPtr;
			}

			// - parse parameters -
			for(auto paramNode : typeit.children("type")) {
				Param param;
				auto type = registry_.findType(paramNode.text().get());
				if(!type) {
					std::cout << "### fptr:2: Couldnt find type " << paramNode.text().get() << "\n";
					continue;
				}

				param.type.type = type;
				std::string prev = paramNode.previous_sibling().value();
				std::string next = paramNode.next_sibling().value();

				if(prev.find("const") != std::string::npos) param.type.constant = true;

				// TODO: also parse arrays here
				// parse pointers
				auto prevPtr = next.find("*");
				while(prevPtr != std::string::npos) {
					auto nextPtr = next.find("*", prevPtr + 1);
					bool hasNext = nextPtr != std::string::npos;

					registry_.qualifieds.push_back(param.type);
					param.type = {};
					param.type.pointer = &registry_.qualifieds.back();

					auto nextConst = next.find("const", prevPtr);
					if(nextConst != std::string::npos && (!hasNext || nextConst < nextPtr))
						param.type.constant = true;

					prevPtr = nextPtr;
				}

				next.erase(std::remove(next.begin(), next.end(), '*'), next.end());
				next.erase(std::remove(next.begin(), next.end(), ' '), next.end());
				next.erase(std::remove(next.begin(), next.end(), '\t'), next.end());
				next.erase(std::remove(next.begin(), next.end(), '\n'), next.end());

				auto pos = next.find(',');
				if(pos == std::string::npos) pos = next.find(')');
				next = next.substr(0, pos);

				param.name = next;
				ptr.signature.params.push_back(param);
			}

			registry_.funcPtrs.push_back(ptr);
		}
	}

	// struct impl, members
	for(auto typeit : node.children("type")) {
		std::string category = typeit.attribute("category").as_string();
		if(category == "struct" || category == "union") {
			auto alias = typeit.attribute("alias");
			if(alias) {
				continue;
			}

			auto name = typeit.attribute("name").as_string();
			auto s = registry_.findStruct(name);
			if(!s) {
				std::cout << "### Couldnt find struct " << name << "\n";
				continue;
			}

			for(auto& member : typeit.children("member"))
				s->members.emplace_back(parseParam(member));
		}
	}
}

void RegistryLoader::loadEnums(const pugi::xml_node& node)
{
	std::string type = node.attribute("type").as_string();
	std::string name = node.attribute("name").as_string();

	log("\t\t", name);
	if(type == "enum" || type == "bitmask") {
		auto retp = registry_.findEnum(name);
		if(!retp) {
			std::cout << "### Couldnt find " << name << "\n";
			return;
		}

		auto& ret = *retp;

		if(type == "bitmask") ret.bitmask = true;
		for(auto enumit : node.children("enum")) {
			std::pair<std::string, std::int64_t> value;

			value.first = enumit.attribute("name").as_string();
			auto alias = enumit.attribute("alias");
			if(alias) {
				auto an = alias.as_string();
				for(auto& r : ret.values) {
					if(r.first == an) {
						value.second = r.second;
						break;
					}
				}
			} else {
				auto attrib = enumit.attribute("value");
				if(!attrib) attrib = enumit.attribute("bitpos");

				auto str = std::string(attrib.as_string());
				if(str.size() > 1 && str.substr(0, 2) == "0x") value.second = std::stoul(str, nullptr, 16);
				else value.second = attrib.as_llong();
			}

			ret.values.push_back(value);
		}
	} else if(name == "API Constants") {
		for(auto enumit : node.children("enum")) {
			auto cname = enumit.attribute("name").as_string();
			Constant constant(enumit);
			constant.name = cname;

			auto aliasAttrib = enumit.attribute("alias");
			if(aliasAttrib) {
				bool found = false;
				for(auto val : registry_.constants) {
					if(val.name == aliasAttrib.as_string()) {
						found = true;
						constant.value = val.value;
						break;
					}
				}

				if(!found) {
					std::cout << "### couldnt find constant alias "
						<< aliasAttrib.as_string() << "\n";
				}
			} else {
				auto value = enumit.attribute("value").as_string();
				constant.value = value;
			}

			registry_.constants.push_back(constant);
		}
	}
}

void RegistryLoader::loadCommands(const pugi::xml_node& node)
{
	for(auto cmd : node.children("command")) {
		Command command{};

		auto alias = cmd.attribute("alias");
		if(alias) {
			auto name = cmd.attribute("name").as_string();
			auto cmd = registry_.findCommand(alias.as_string());
			if(!cmd) {
				std::cout << "### couldnt find cmd alias "
					<< alias.as_string() << "\n";
				continue;
			}

			cmd->aliases.push_back(name);
			continue;
		}

		auto p = parseParam(cmd.child("proto"));
		command.signature.returnType = p.type;
		command.name = p.name;

		for(auto param : cmd.children("param"))
			command.signature.params.emplace_back(parseParam(param));

		registry_.commands.push_back(command);
		log("\t\t", p.name);
	}
}

Param RegistryLoader::parseParam(const pugi::xml_node& node)
{
	Param ret(node);

	auto optAttrib = node.attribute("optional");
	if(std::strcmp(optAttrib.as_string(), "true") == 0) ret.optional = true;

	auto typeChild = node.child("type");
	ret.type.type = registry_.findType(typeChild.text().get());

	auto nameChild = node.child("name");
	ret.name = nameChild.text().get();

	// parse return type const
	if(typeChild.previous_sibling()) {
		std::string string = typeChild.previous_sibling().text().get();
		if(string.find("const") != std::string::npos) {
			ret.type.constant = true;
		}
	}

	// parse pointer
	if(typeChild.next_sibling()) {
		std::string next = typeChild.next_sibling().text().get();
		auto prevPtr = next.find("*");
		while(prevPtr != std::string::npos) {
			auto nextPtr = next.find("*", prevPtr + 1);
			bool hasNext = nextPtr != std::string::npos;

			registry_.qualifieds.push_back(ret.type);
			ret.type = {};
			ret.type.pointer = &registry_.qualifieds.back();

			auto nextConst = next.find("const", prevPtr);
			if(nextConst != std::string::npos && (!hasNext || nextConst < nextPtr))
				ret.type.constant = true;

			prevPtr = nextPtr;
		}
	}

	// parse arrays
	if(nameChild.next_sibling()) {
		std::string txt;
		auto sib = nameChild;
		while((sib = sib.next_sibling())) {
			if(std::strcmp(sib.name(), "comment") == 0)
				break;

			txt += sib.text().get();
		}
		// std::string txt = nameChild.next_sibling().text().get();
		bool bracketOpen = false;
		while(!txt.empty()) {
			if(!bracketOpen) {
				auto pos = txt.find('[');
				if(pos != std::string::npos) {
					bracketOpen = true;
					if(txt.size() > pos + 1) txt = txt.substr(pos + 1);
					else break;
				}
				else break;
			}

			auto pos = txt.find(']');
			if(txt.empty()) break;
			if(pos != 0) {
				registry_.qualifieds.push_back(ret.type);
				ret.type = {};
				ret.type.array = &registry_.qualifieds.back();
				ret.type.arraySize = txt.substr(0, pos);
			}

			if(pos != std::string::npos) {
				bracketOpen = false;
				if(txt.size() > pos + 1) txt = txt.substr(pos + 1);
				else break;
			}
			else break;
		}
	}

	return ret;
}

void RegistryLoader::loadFeature(const pugi::xml_node& node) {
	Feature feature;
	feature.reqs = parseRequirements(node);
	feature.name = node.attribute("name").as_string();
	feature.api = node.attribute("api").as_string();
	feature.number = node.attribute("number").as_string();
	registry_.features.push_back(feature);

	log("\t\tfeature", feature.name, ": ", feature.api);
}

void RegistryLoader::loadExtension(const pugi::xml_node& node) {
	std::string author = node.attribute("author").as_string();

	// NOTE: completely ignore all experimental extensions
	// for backwards compatibility
	if(author == "NVX" || author == "KHX" || author == "AMDX") {
		return;
	}

	// TODO: fix struct fwd decls
	std::string platform = node.attribute("platform").as_string();
	if(platform == "metal" || platform == "android") {
		return;
	}

	Extension extension;
	extension.supported = node.attribute("supported").as_string();
	extension.number = node.attribute("number").as_int();
	extension.name = node.attribute("name").as_string();
	extension.platform = registry_.findPlatform(platform);

	if(!extension.platform && !platform.empty()) {
		std::cout << "### couldnt find platform '" << platform << "'\n";
	}

	if(extension.supported.find("vulkan") != std::string::npos) {
		extension.reqs = parseRequirements(node, true);
		registry_.extensions.push_back(extension);

		auto feature = registry_.findFeatureByApi(extension.supported);
		if(feature) {
			feature->extensions.push_back(&registry_.extensions.back());
		} else {
			std::cout << "### couldnt find feature " << extension.supported << "\n";
		}
	}

	log("\t\textension ", extension.name);
}

Requirements RegistryLoader::parseRequirements(const pugi::xml_node& node, bool extension) {
	Requirements ret;

	int number = 0;
	auto numberAttrib = node.attribute("number");
	if(numberAttrib) number = numberAttrib.as_int() - 1;

	for(auto& require : node.children("require")) {

		// types
		for(auto& req : require.children("type")) {
			std::string name = req.name();
			auto type = registry_.findType(req.attribute("name").as_string());
			if(!type) {
				std::cout << "###couldnt find type " << req.attribute("name").as_string() << "\n";
				continue;
			}
			parseTypeReqs(*type, ret);
		}

		// commands
		for(auto& req : require.children("command")) {
			auto cmd = registry_.findCommand(req.attribute("name").as_string());
			if(!cmd) {
				std::cout << "###couldnt find cmd " << req.attribute("name").as_string() << "\n";
				continue;
			}
			parseCommandReqs(*cmd, ret, extension);
		}

		// enums
		for(auto& req : require.children("enum")) {
			auto enumName = req.attribute("name").as_string();
			auto extAttrib = req.attribute("extends");

			if(!extAttrib) {
				// check if just an alias
				auto aliasAttrib = req.attribute("alias");
				auto valueAttrib = req.attribute("value");
				auto value = std::string(valueAttrib.value());

				if(aliasAttrib) {
					bool found = false;
					for(auto val : ret.extraConstants) {
						if(val.name == aliasAttrib.as_string()) {
							found = true;
							Constant c(req);
							c.name = req.attribute("name").as_string();
							c.value = val.value;
							ret.extraConstants.push_back(c);
							break;
						}
					}

					if(!found) {
						std::cout << "### couldnt find constant alias "
							<< aliasAttrib.as_string() << "\n";
					}
				} else if(valueAttrib && (value[0] == '\"' || value.find("VK") == std::string::npos)) {
					Constant constant(req);
					constant.name = req.attribute("name").as_string();
					constant.value = valueAttrib.as_string();
					ret.extraConstants.push_back(constant);
				} else if(!valueAttrib) {
					auto constant = registry_.findConstant(enumName);
					if(!constant) {
						std::cout << "### couldnt find constant " << enumName << "\n";
						continue;
					}

					// check if already in constants
					auto found = false;
					for(const auto& c : ret.constants) {
						if(c == constant) {
							found = true;
							break;
						}
					}

					if(!found) ret.constants.push_back(constant);
				}
			} else if(extAttrib) {
				// check if just an alias
				auto aliasAttrib = req.attribute("alias");
				auto valueAttrib = req.attribute("value");

				// check if bitflag or enumeration
				auto bitposAttrib = req.attribute("bitpos");

				auto extEnum = registry_.findEnum(extAttrib.as_string());
				if(!extEnum) {
					std::cout << "### couldnt find enum " << extAttrib.as_string() << "\n";
					continue;
				}

				if(aliasAttrib) {
					bool found = false;
					for(auto val : extEnum->values) {
						if(val.first == aliasAttrib.as_string()) {
							found = true;
							auto v = std::make_pair(req.attribute("name").as_string(),
								val.second);
							extEnum->values.push_back(v);
							break;
						}
					}

					if(!found) {
						std::cout << "### couldnt find enum alias "
							<< aliasAttrib.as_string() << "\n";
					}
				} else if(bitposAttrib) {
					auto pos = bitposAttrib.as_llong();
					auto v = std::make_pair(req.attribute("name").as_string(), pos);
					extEnum->values.push_back(v);
				} else if(valueAttrib) {
					auto pos = valueAttrib.as_llong();
					auto v = std::make_pair(req.attribute("name").as_string(), pos);
					extEnum->values.push_back(v);
				} else {
					std::string dir = "+";
					auto dirAttrib = req.attribute("dir");
					if(dirAttrib) {
						dir = dirAttrib.as_string();
					}

					auto offset = req.attribute("offset").as_llong();
					offset += number * 1000; //extension number queried in the beginning

					std::int64_t value = 0;

					// Base given by khronos
					if(dir == "+") {
						value = 1000000000 + offset;
					} else if(dir == "-") {
						value = -1000000000 - offset;
					} else {
						std::cerr << "### invalid enum ext dir: '" << dir << "', " << enumName << "\n";
					}

					std::string name = req.attribute("name").as_string();

					auto v = std::make_pair(name, value);
					extEnum->values.push_back(v);
				}
			}
		}
	}

	return ret;
}

void RegistryLoader::parseTypeReqs(Type& type, Requirements& reqs) {
	// check it is not already parsed
	for(auto& t : reqs.types) {
		if(t->name == type.name) {
			return;
		}
	}

	// insert it here and remove it later (to keep ordering correctly)
	// if we would only insert it later recursive structures (like
	// VkBaseOutStructure would lead to infinite recursion)
	auto i = reqs.types.size();
	reqs.types.push_back(&type);
	if(type.category == Type::Category::structure) {
		auto& s = static_cast<Struct&>(type);
		for(auto& member : s.members) {
			parseTypeReqs(member.type, reqs);
		}
	} else if(type.category == Type::Category::funcptr) {
		auto& ptr = static_cast<FuncPtr&>(type);
		for(auto& param : ptr.signature.params) {
			parseTypeReqs(param.type, reqs);
		}
	} else if(type.category == Type::Category::bitmask) {
		auto& mask = static_cast<Bitmask&>(type);
		if(mask.bits) {
			parseTypeReqs(*mask.bits, reqs);
		}
	}

	// move type at the end of types for dependencies when outputting
	reqs.types.erase(reqs.types.begin() + i);
	reqs.types.push_back(&type);
}

void RegistryLoader::parseTypeReqs(QualifiedType& type, Requirements& reqs) {
	if(type.type) parseTypeReqs(*type.type, reqs);
	if(type.pointer) parseTypeReqs(*type.pointer, reqs);
	if(type.array) {
		parseTypeReqs(*type.array, reqs);

		auto constant = registry_.findConstant(type.arraySize);
		if(constant) { // check if already in reqs
			bool found = false;
			for(auto& c : reqs.constants) {
				if(c == constant) {
					found = true;
					break;
				}
			}

			if(!found)
				reqs.constants.push_back(constant);
		}
	}
}

void RegistryLoader::parseCommandReqs(Command& cmd, Requirements& reqs, bool extension) {
	for(auto& param : cmd.signature.params) {
		parseTypeReqs(param.type, reqs);
	}

	parseTypeReqs(cmd.signature.returnType, reqs);

	if(!extension || prototypes_) reqs.commands.push_back(&cmd);
	if(extension) reqs.funcPtr.push_back(&cmd);
}


// registry
Feature* Registry::findFeatureByName(const std::string& name)
{
	for(auto& c : features) if(c.name == name) return &c;
	return nullptr;
}
Feature* Registry::findFeatureByApi(const std::string& name)
{
	for(auto& c : features) if(c.api == name) return &c;
	return nullptr;
}
Extension* Registry::findExtension(const std::string& name)
{
	for(auto& c : extensions) if(c.name == name) return &c;
	return nullptr;
}
Constant* Registry::findConstant(const std::string& name)
{
	for(auto& c : constants) if(c.name == name) return &c;
	return nullptr;
}
Command* Registry::findCommand(const std::string& name)
{
	for(auto& c : commands) {
		if(c.name == name) {
			return &c;
		}

		for(auto& alias : c.aliases) {
			if(alias == name) {
				return &c;
			}
		}
	}
	return nullptr;
}

Platform* Registry::findPlatform(const std::string& name)
{
	for(auto& c : platforms) if(c.name == name) return &c;
	return nullptr;
}

Enum* Registry::findEnum(const std::string& name)
{
	for(auto& e : enums) if(e.name == name) return &e;
	return nullptr;
}

BaseType* Registry::findBaseType(const std::string& name)
{
	for(auto& e : baseTypes) if(e.name == name) return &e;
	return nullptr;
}

FuncPtr* Registry::findFuncPtr(const std::string& name)
{
	for(auto& e : funcPtrs) if(e.name == name) return &e;
	return nullptr;
}

Type* Registry::findPlainType(const std::string& name)
{
	for(auto& e : plainTypes) if(e.name == name) return &e;
	return nullptr;
}

Type* Registry::findType(const std::string& name)
{
	Type* ret = nullptr;
	if((ret = findEnum(name))) return ret;
	if((ret = findStruct(name))) return ret;
	if((ret = findExternalType(name))) return ret;
	if((ret = findBitmask(name))) return ret;
	if((ret = findBaseType(name))) return ret;
	if((ret = findHandle(name))) return ret;
	if((ret = findFuncPtr(name))) return ret;
	if((ret = findPlainType(name))) return ret;
	return nullptr;
}

Struct* Registry::findStruct(const std::string& name)
{
	for(auto& e : structs) if(e.name == name) return &e;
	return nullptr;
}

Bitmask* Registry::findBitmask(const std::string& name)
{
	for(auto& e : bitmasks) if(e.name == name) return &e;
	return nullptr;
}

ExternalType* Registry::findExternalType(const std::string& name)
{
	for(auto& e : externalTypes) if(e.name == name) return &e;
	return nullptr;
}

Handle* Registry::findHandle(const std::string& name)
{
	for(auto& e : handles) if(e.name == name) return &e;
	return nullptr;
}

//Requirements
void Requirements::add(Requirements& reqs)
{
	commands.insert(commands.end(), reqs.commands.begin(), reqs.commands.end());
	types.insert(types.end(), reqs.types.begin(), reqs.types.end());
	constants.insert(constants.end(), reqs.constants.begin(), reqs.constants.end());
	funcPtr.insert(funcPtr.end(), reqs.funcPtr.begin(), reqs.funcPtr.end());

	for(auto& c : reqs.extraConstants)
		constants.push_back(&c);
}
