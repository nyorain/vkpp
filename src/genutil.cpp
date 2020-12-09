#include "registry.hpp"
#include <regex>
#include <iostream>
#include <unordered_set>

auto templateStart = &R"SRC(
#pragma once

#include <vulkan/vulkan.h>
#include <string>

// Automatically generated header, don't edit.
// See github.com/nyorain/vkpp.
// Generated for vulkan version: 1.1.%vp

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

void endGuard(std::ofstream& of, bool guardVar, const std::string& guard)
{
	if(guardVar && !guard.empty())of << "#endif //" << guard << "\n\n";
}

void printReqs(std::ofstream& of, const Requirements& reqs,
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

		ensureGuard(of, guardVar, guard);

		of << "inline const char* name(" << enumeration.name << " val) {\n";
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

			of << "\t\tcase " << n << ": return \"" << n << "\";\n";
		}

		of << "\t\tdefault: return nullptr;\n";
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

		ensureGuard(of, guardVar, guard);

		of << "inline std::string flagNames(" << bitmask.bits->name;

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

			of << "\tif((val & " << n << ") == " << n << ") ret += \"" << n << " | \";\n";
		}

		of << "\tif(!ret.empty()) ret.erase(ret.size() - 2, 2);\n";
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

		printReqs(of, reqs, fulfilled, "");
		fulfilled.add(reqs);

		// output extensions
		for(auto& ext : feature.extensions) {
			auto guard = ext->platform ? ext->platform->protect : "";
			printReqs(of, ext->reqs, fulfilled, guard);
			fulfilled.add(ext->reqs);
		}
	}

	// TODO: other extensions
	for(auto& ext : registry.extensions) {
		auto& reqs = ext.reqs;
		auto guard = ext.platform ? ext.platform->protect : "";
		printReqs(of, reqs, fulfilled, guard);
		fulfilled.add(reqs);
	}

	of << "\n} // namespace vk\n";
}
