#include <string>
#include <fstream>
#include "../lib/single_include/nlohmann/json.hpp"

using json = nlohmann::json;

class Serializer {
public:
    static json LoadFromJson(const std::string& filepath) {
        std::ifstream file;
        file.open(filepath);
        if (!file.is_open()) {
            throw std::runtime_error("Unable to open JSON file: " + filepath);
        }
        json j;
        file >> j;
        return j;
    };
};