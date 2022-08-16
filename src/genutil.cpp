#include "registry.hpp"
#include "string.hpp"
#include <regex>
#include <iostream>
#include <unordered_set>

auto templateStart = &R"SRC(
#pragma once

#include <vulkan/vulkan.h>
#include <string>

// Automatically generated header, don't edit.
// See github.com/nyorain/vkpp.
// Generated for vulkan version: 1.3.%vp

namespace vk {
)SRC"[1];

template<typename... Args>
void log(Args... args) {
	using Expand = const int[];
	static constexpr auto logEnabled = true;
	if(logEnabled) {
		(void) Expand{(std::cerr << args, 0)...};
		std::cerr << "\n";
	}
}

void ensureGuard(std::ofstream& of, bool& guardVar, const std::string& guard) {
	if(!guardVar) {
		if(!guard.empty())of << "\n#ifdef " << guard << "\n";
		guardVar = true;
	}
}

void endGuard(std::ofstream& of, bool guardVar, const std::string& guard) {
	if(guardVar && !guard.empty()) {
		of << "#endif //" << guard << "\n\n";
	}
}

std::string processName(const Registry& reg, const Enum& e, std::string ret) {
	camelCaseInPlace(ret, true);

	auto enumName = e.name;
	auto bpos = enumName.rfind("FlagBits");
	if(bpos != std::string::npos) {
		// Preserve FlagBits suffixes, such as in FlagBits2
		// enumName = enumName.substr(0, bpos);
		enumName.erase(bpos, 8);
	}

	// TODO: better check for common prefix: don't compare char for char but
	// rather word for word (words are seperated by an underscore) (?)
	auto s = 0u;
	while(enumName.size() > s && ret.size() > s && enumName[s] == ret[s]) {
		++s;
	}

	ret = ret.substr(s);

	// for special cases (e.g. VkResult: remove vk prefix)
	if(s == 0u) {
		removeVkPrefixInPlace(ret);
	}

	// remove "Bit" from bitmask enums
	bpos = ret.rfind("Bit");
	if(e.bitmask && bpos != std::string::npos) {
		ret.erase(bpos, 3);
	}

	// capitalize extension prefixes
	std::string ext;
	removeExtSuffix(reg, ret, &ext);
	if(!ret.empty())
		for(auto i = 0u; i < ext.size(); ++i)
			ret[ret.size() - i] = std::toupper(ret[ret.size() - i], std::locale());

	return ret;
}

void printReqs(const Registry& reg, std::ofstream& of, const Requirements& reqs,
		const Requirements& fulfilled, const std::string& guard) {
	bool guardVar = false;

	// TODO: hacky, for forwards-compat
	auto forbiddenTokens = {
		"NVX",
		"VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT",
	};

	// enums
	for(auto* typeit : reqs.types) {
		if(typeit->category != Type::Category::enumeration) continue;
		auto& enumeration = static_cast<Enum&>(*typeit);

		auto it = std::find(fulfilled.types.cbegin(), fulfilled.types.cend(), &enumeration);
		if(it != fulfilled.types.cend()) continue;

		if(enumeration.values.empty()) {
			continue;
		}

		ensureGuard(of, guardVar, guard);

		std::string funcName = "name";

		if(enumeration.bitwidth == 64) {
			auto n = enumeration.name;
			removeVkPrefixInPlace(n);
			funcName += n;
		}

		of << "inline const char* " << funcName << "(" << enumeration.name << " val) {\n";
		of << "\tswitch(val) {\n";
		std::unordered_set<std::int32_t> alreadyVals {};
		for(auto& value : enumeration.values) {
			auto n = value.first;
			if(!alreadyVals.insert(value.second).second) {
				// doubled
				continue;
			}

			// XXX: hacky
			bool cont = false;;
			for(auto& tok : forbiddenTokens) {
				if(n.find(tok) != n.npos) {
					cont = true;
					break;
				}
			}

			if(cont) {
				continue;
			}

			of << "\t\tcase " << n << ": return \"" << processName(reg, enumeration, n) << "\";\n";
		}

		of << "\t\tdefault: return \"\";\n";
		of << "\t}\n}\n";
	}

	// bitmasks
	for(auto* typeit : reqs.types) {
		if(typeit->category != Type::Category::bitmask) continue;
		auto& bitmask = static_cast<Bitmask&>(*typeit);

		auto it = std::find(fulfilled.types.cbegin(), fulfilled.types.cend(), &bitmask);
		if(it != fulfilled.types.cend()) continue;

		if(!bitmask.bits) {
			continue;
		}

		if(bitmask.bits->values.empty()) {
			continue;
		}

		ensureGuard(of, guardVar, guard);

		// overloading doesn't work here

#if 0
		std::string funcName = "flagNames";

		if(bitmask.bits->bitwidth == 64) {
			auto n = bitmask.name;
			removeVkPrefixInPlace(n);
			funcName += n;
		}

		of << "inline std::string " << funcName << "(" << bitmask.bits->name;
#else
		std::string funcName = "name";
		auto n = bitmask.name;
		removeVkPrefixInPlace(n);
		funcName += n;

		of << "inline std::string " << funcName << "(" << bitmask.name;
#endif

		auto& enumeration = *bitmask.bits;
		if(!enumeration.values.empty()) {
			of << " val";
		}
		of << ") {\n";

		of << "\tstd::string ret;\n";
		std::unordered_set<std::int32_t> alreadyVals {};
		for(auto& value : enumeration.values) {
			auto n = value.first;
			if(!alreadyVals.insert(value.second).second) {
				// doubled
				continue;
			}

			// XXX: hacky
			bool cont = false;;
			for(auto& tok : forbiddenTokens) {
				if(n.find(tok) != n.npos) {
					cont = true;
					break;
				}
			}

			if(cont) {
				continue;
			}

			auto pn = processName(reg, enumeration, n);
			of << "\tif((val & " << n << ") == " << n << ") ret += \"" << pn << " | \";\n";
		}

		of << "\tif(!ret.empty()) ret.erase(ret.size() - 3, 3);\n";
		of << "\treturn ret;\n";
		of << "\n}\n";
	}

	endGuard(of, guardVar, guard);
}

int main(int argc, const char** argv) {
	if(argc != 2) {
		return EXIT_FAILURE;
	}

	RegistryLoader loader(argv[1]);
	auto& registry = loader.parse();

	std::ofstream of;
	of.open("enumString.hpp", std::ios_base::out | std::ios_base::binary);

	of << std::regex_replace(templateStart, std::regex("%vp"), registry.version);

	Requirements fulfilled;

	// output the default vulkan feature
	struct {
		const char* name;
		bool forceDispatch;
	} features[] = {
		{"VK_VERSION_1_3", true},
		{"VK_VERSION_1_2", true},
		{"VK_VERSION_1_1", true},
		{"VK_VERSION_1_0", false},
	};

	for(auto f : features) {
		auto pf = registry.findFeatureByName(f.name);
		if (!pf) {
			log("Invalid feature ", f.name);
			continue;
		}

		auto& feature = *pf;
		auto& reqs = feature.reqs;

		printReqs(registry, of, reqs, fulfilled, "");
		fulfilled.add(reqs);

		// output extensions
		for(auto& ext : feature.extensions) {
			auto guard = ext->platform ? ext->platform->protect : "";
			printReqs(registry, of, ext->reqs, fulfilled, guard);
			fulfilled.add(ext->reqs);
		}
	}

	// TODO: other extensions
	for(auto& ext : registry.extensions) {
		auto& reqs = ext.reqs;
		auto guard = ext.platform ? ext.platform->protect : "";
		printReqs(registry, of, reqs, fulfilled, guard);
		fulfilled.add(reqs);
	}

	of << "\n} // namespace vk\n";
}
