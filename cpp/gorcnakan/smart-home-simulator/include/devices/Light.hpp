#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "Device.hpp"
#include <iostream>

class Light : public Device {
public:
    Light(const std::string& lightName);

    void performAction() override;
};

#endif