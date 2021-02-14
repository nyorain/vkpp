#pragma once

#include "registry.hpp"
#include <string>
#include <locale>

inline void toLowerInPlace(std::string& str) {
	if (str.length()==0)
		return;
	static const auto& f = std::use_facet<std::ctype<char>>(std::locale());
	f.tolower(&str.front(), &str.back() + 1);
}

/// string to lower in copy
inline std::string toLower(const std::string& str) {
	auto ret = str;
	toLowerInPlace(ret);
	return ret;
}

// brings the given string into camelCase.
// If firstupper is true, also capitalizes the first char.
// Example: camelCase(TEST_CASE_ABC_de, true) -> TestCaseAbcDe
// TODO: automatically detect EXT suffixes here and don't camel case them?
inline void camelCaseInPlace(std::string& string, bool firstupper = false) {
	if(string.empty()) {
		return;
	}

	std::size_t pos = 0u;
	toLowerInPlace(string);
	while((pos = string.find('_')) != std::string::npos) {
		string.erase(pos, 1);
		if(pos < string.size()) {
			string[pos] = std::toupper(string[pos], std::locale());
		}
	}

	if(firstupper) {
		string[0] = std::toupper(string[0], std::locale());
	} else {
		string[0] = std::tolower(string[0], std::locale());
	}
}

inline std::string camelCase(const std::string& string, bool firstupper = false) {
	auto ret = string;
	camelCaseInPlace(ret, firstupper);
	return ret;
}

// removes a vk or VK prefix (case does not matter)
// if the string startes with VK_ also removes the first underscore.
inline bool removeVkPrefixInPlace(std::string& string) {
	if(string.size() < 2) {
		return false;
	}

	auto sub = string.substr(0, 2);
	toLowerInPlace(sub);

	if(sub == "vk") {
		if(string[2] == '_') {
			string = string.substr(3);
		} else {
			string = string.substr(2);
		}
		return true;
	}

	return false;
}

inline std::string removeVkPrefix(const std::string& string, bool* found) {
	auto ret = string;
	if(found) {
		*found = removeVkPrefixInPlace(ret);
	} else {
		removeVkPrefixInPlace(ret);
	}

	return ret;
}

// removes the extension or tag suffix from a string.
// Uses the stored registry to query valid extensions (vendor) suffixes.
// Will also remove tag suffixes (such as KHR or EXT)
// Returns the found extension/tag.
inline std::string removeExtSuffixInPlace(const Registry& reg, std::string& string) {
	for(auto ext : reg.vendors) {
		if(string.size() < ext.size()) {
			continue;
		}

		ext = toLower(ext);
		if(toLower(string.substr(string.size() - ext.size())) == ext) {
			string = string.substr(0, string.size() - ext.size());
			return ext;
		}
	}

	for(auto ext : reg.tags) {
		if(string.size() < ext.size()) {
			continue;
		}

		ext = toLower(ext);
		if(toLower(string.substr(string.size() - ext.size())) == ext) {
			string = string.substr(0, string.size() - ext.size());
			return ext;
		}
	}

	std::string ext = "ext";
	if(string.size() < ext.size()) {
		return "";
	}

	if(toLower(string.substr(string.size() - ext.size())) == ext){
		string = string.substr(0, string.size() - ext.size());
		return ext;
	}

	return "";
}

inline std::string removeExtSuffix(const Registry& reg,
		const std::string& string, std::string* extension) {
	auto ret = string;
	if(extension) {
		*extension = removeExtSuffixInPlace(reg, ret);
	} else {
		removeExtSuffixInPlace(reg, ret);
	}
	return ret;
}

