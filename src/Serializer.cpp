#include "../headers/Serializer.h"

json Serializer::LoadFromJson(const std::string& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open JSON file: " + filepath);
    }
    json j;
    file >> j;
    return j;
};