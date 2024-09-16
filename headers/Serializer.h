#pragma once
#include <string>
#include <fstream>
#include "../lib/single_include/nlohmann/json.hpp"

using json = nlohmann::json;

class Serializer
{
public:
	json LoadFromJson(const std::string& filepath);
};

