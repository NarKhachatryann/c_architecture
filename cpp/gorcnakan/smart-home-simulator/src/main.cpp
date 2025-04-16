#include "hub/Hub.hpp"
#include "devices/Light.hpp"
#include "devices/Thermostat.hpp"
#include "logger/Logger.hpp"
#include <iostream>
#include <memory>

int main() {
    Hub hub;
    ConsoleLogger logger;

    auto livingRoomLight = std::make_shared<Light>("Living Room Light");
    auto kitchenLight = std::make_shared<Light>("Kitchen Light");
    auto thermostat = std::make_shared<Thermostat>("Room Thermostat", 22.5);

    hub.addDevice(livingRoomLight);
    hub.addDevice(kitchenLight);
    hub.addDevice(thermostat);

    std::cout << "Devices registered in Hub:" << std::endl;
    hub.listDevices();

    std::cout << "Executing actions..." << std::endl;
    hub.executeAllActions();

    thermostat->setDesiredTemperature(24.0);
    hub.executeAllActions();

    logger.log("All actions executed successfully.");
    logger.log("Thermostat temperature updated.");

    std::cout << "Smart Home simulation finished." << std::endl;
    return 0;
}
