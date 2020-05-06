#include "state.h"
#include <algorithm>
#include <string>

std::string State::toLower(const std::string& str)
{
	std::string _str = str;
	std::transform(_str.begin(), _str.end(), _str.begin(),
				   [](unsigned char c){ return std::tolower(c); });
	return _str;
}
std::string State::toUpper(const std::string& str)
{
	std::string _str = str;
	std::transform(_str.begin(), _str.end(), _str.begin(),
				   [](unsigned char c){ return std::toupper(c); });
	return _str;
}
