#ifndef THERMOSTAT_HPP
#define THERMOSTAT_HPP

#include "Device.hpp"
#include <iostream>
#include <string>

class Thermostat : public Device {
private:
    float currentTemperature;
    float desiredTemperature;

public:
    Thermostat(const std::string& thermostatName, float initialTemperature);

    void setDesiredTemperature(float temperature);
    float getDesiredTemperature() const;
    float getCurrentTemperature() const;

    void performAction() override;
};

#endif