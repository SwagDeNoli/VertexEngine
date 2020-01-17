//
// Created by User2 on 1/16/2020.
//

#include <fstream>
#include "IOManager.hpp"

bool IOManager::ReadFileToString(const std::string &filePath, std::string &buffer) {
    std::ifstream file;
    file.open(filePath);

    std::string line;
    std::string output;

    if (file.is_open()) {
        while (file.good()) {
            std::getline(file, line);
            output.append(line + "\n");
        }
    } else {
        return false;
    }

    buffer = output;
    return true;
}
