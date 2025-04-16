#include "hub/Hub.hpp"
#include <algorithm>
#include <memory>
#include <iostream>

void Hub::initialize() {
    HubName = "SmartHome Hub";
    HubVersion = "1.0";
    HubStatus = "Active";
    HubLocation = "Default Location";
    devices.clear();
    std::cout << "Hub initialized successfully." << std::endl;
}

void Hub::shutdown() {
    HubStatus = "Inactive";
    std::cout << "Hub has been shut down." << std::endl;
}

void Hub::restart() {
    shutdown();
    initialize();
    std::cout << "Hub has been restarted." << std::endl;
}

void Hub::update() {
    HubVersion = "1.1";
    std::cout << "Hub updated to version " << HubVersion << std::endl;
}

void Hub::addDevice(const std::shared_ptr<Device>& device) {
    devices.push_back(device);
    std::cout << "Device '" << device->getName() << "' added to Hub." << std::endl;
}

void Hub::removeDevice(const std::string& deviceName) {
    auto it = std::find_if(devices.begin(), devices.end(), [&deviceName](const std::shared_ptr<Device>& device) {
        return device->getName() == deviceName;
    });
    if (it != devices.end()) {
        devices.erase(it);
        std::cout << "Device '" << deviceName << "' removed from Hub." << std::endl;
    } else {
        std::cout << "Device '" << deviceName << "' not found in Hub." << std::endl;
    }
}

void Hub::listDevices() {
    std::cout << "Devices registered in Hub:" << std::endl;
    for (const auto& device : devices) {
        std::cout << "- " << device << std::endl;
    }
}

void Hub::setHubLocation(const std::string& location) {
    HubLocation = location;
    std::cout << "Hub location set to: " << HubLocation << std::endl;
}

std::string Hub::getHubName() const {
    return HubName;
}

std::string Hub::getHubVersion() const {
    return HubVersion;
}

std::string Hub::getHubStatus() const {
    return HubStatus;
}

std::string Hub::getHubLocation() const {
    return HubLocation;
}

void Hub::setHubName(const std::string& name) {
    HubName = name;
    std::cout << "Hub name set to: " << HubName << std::endl;
}

void Hub::setHubVersion(const std::string& version) {
    HubVersion = version;
    std::cout << "Hub version set to: " << HubVersion << std::endl;
}

void Hub::setHubStatus(const std::string& status) {
    HubStatus = status;
    std::cout << "Hub status set to: " << HubStatus << std::endl;
}

void Hub::displayHubStatus() const {
    std::cout << "Hub Status: " << HubStatus << std::endl;
}

void Hub::displayHubLocation() const {
    std::cout << "Hub Location: " << HubLocation << std::endl;
}

void Hub::displayHubDevices() const {
    std::cout << "Devices in Hub: ";
    for (const auto& device : devices) {
        std::cout << device << " ";
    }
    std::cout << std::endl;
}

void Hub::displayHubVersion() const {
    std::cout << "Hub Version: " << HubVersion << std::endl;
}

void Hub::displayHubName() const {
    std::cout << "Hub Name: " << HubName << std::endl;
}

void Hub::executeAllActions() {
    for (const auto& device : devices) {
        device->performAction();
    }
}
