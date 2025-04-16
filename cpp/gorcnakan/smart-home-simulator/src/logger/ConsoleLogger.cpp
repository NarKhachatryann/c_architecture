#include "logger/Logger.hpp"
#include <iostream>

void ConsoleLogger::log(const std::string& message) {
    std::cout << "[LOG]: " << message << std::endl;
}