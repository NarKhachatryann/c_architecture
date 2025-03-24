#include "../include/Utility.h"
#include <algorithm>

std::string Utility::toLowerCase(const std::string& input) {
    std::string lower = input;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    return lower;
}

bool Utility::isValidInput(int choice, int min, int max) {
    return (choice >= min && choice <= max);
}
