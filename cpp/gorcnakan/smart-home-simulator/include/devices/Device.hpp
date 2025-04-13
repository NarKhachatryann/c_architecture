#ifndef DEVICE_HPP
#define DEVICE_HPP

#include "../hub/Hub.hpp"
#include <string>
#include <memory>

class Device {
protected:
    std::string name;

public:
    Device(const std::string& deviceName) : name(deviceName) {}
    virtual ~Device() = default;

    virtual void performAction() = 0;
    std::string getName() const { return name; }
};

#endif