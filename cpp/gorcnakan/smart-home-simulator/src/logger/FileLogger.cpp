#include "logger/Logger.hpp"

FileLogger::FileLogger(const std::string& filename) {
    file.open(filename, std::ios::app);
}

FileLogger::~FileLogger() {
    if (file.is_open()) {
        file.close();
    }
}

void FileLogger::log(const std::string& message) {
    if (file.is_open()) {
        file << "[LOG]: " << message << std::endl;
    }
}