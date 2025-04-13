#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <fstream>
#include <iostream>

class Logger {
public:
    virtual void log(const std::string& message) = 0;
    virtual ~Logger() = default;
};

class ConsoleLogger : public Logger {
public:
    void log(const std::string& message) override;
};

class FileLogger : public Logger {
private:
    std::ofstream file;

public:
    FileLogger(const std::string& filename);
    ~FileLogger();
    void log(const std::string& message) override;
};

#endif