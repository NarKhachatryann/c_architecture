#ifndef UTILITY_H
#define UTILITY_H

#include <string>

class Utility {
public:
    static std::string toLowerCase(const std::string& input);
    static bool isValidInput(int choice, int min, int max);
};

#endif