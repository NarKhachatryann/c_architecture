#include "devices/Thermostat.hpp"

Thermostat::Thermostat(const std::string& thermostatName, float initialTemperature)
    : Device(thermostatName), currentTemperature(initialTemperature), desiredTemperature(initialTemperature) {}

void Thermostat::setDesiredTemperature(float temperature) {
    desiredTemperature = temperature;
    std::cout << "Thermostat '" << name << "' set to desired temperature: " << desiredTemperature << "°C." << std::endl;
}

float Thermostat::getDesiredTemperature() const {
    return desiredTemperature;
}

float Thermostat::getCurrentTemperature() const {
    return currentTemperature;
}

void Thermostat::performAction() {
    if (currentTemperature < desiredTemperature) {
        std::cout << "Thermostat '" << name << "' is heating to reach " << desiredTemperature << "°C." << std::endl;
        currentTemperature += 1.0;
    } else if (currentTemperature > desiredTemperature) {
        std::cout << "Thermostat '" << name << "' is cooling to reach " << desiredTemperature << "°C." << std::endl;
        currentTemperature -= 1.0;
    } else {
        std::cout << "Thermostat '" << name << "' is maintaining the desired temperature: " << desiredTemperature << "°C." << std::endl;
    }
}