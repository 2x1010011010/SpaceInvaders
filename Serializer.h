#pragma once
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"

using json = nlohmann::json;

class Serializer
{
public:
	static json LoadFromJson(const std::string& filepath);
};

