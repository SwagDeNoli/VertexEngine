//
// Created by User2 on 1/16/2020.
//

#include <string>

struct IOManager {
    static bool ReadFileToString(const std::string &filePath, std::string &buffer);
};