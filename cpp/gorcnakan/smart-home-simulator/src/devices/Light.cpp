#include "Light.hpp"

Light::Light(const std::string& lightName)
    : Device(lightName) {}

void Light::performAction() {
    std::cout << "Light " << name << " is turned ON." << std::endl;
}