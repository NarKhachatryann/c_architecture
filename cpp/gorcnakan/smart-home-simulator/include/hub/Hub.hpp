#ifndef HUB_HPP
#define HUB_HPP

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "../devices/Device.hpp"

class Device;

class Hub {
private:
    std::vector<std::shared_ptr<Device>> devices;
    std::string HubName;
    std::string HubVersion;
    std::string HubStatus;
    std::string HubLocation;

public:
    void initialize();
    void shutdown();
    void restart();
    void update();
    void addDevice(const std::shared_ptr<Device>& device);
    void removeDevice(const std::string& deviceName);
    void listDevices();
    void executeAllActions();

    std::string getHubName() const;
    std::string getHubVersion() const;
    std::string getHubStatus() const;
    std::string getHubLocation() const;
    
    void setHubName(const std::string& name);
    void setHubVersion(const std::string& version);
    void setHubStatus(const std::string& status);
    void setHubLocation(const std::string& location);
    
    void displayHubStatus() const;
    void displayHubLocation() const;
    void displayHubDevices() const;
    void displayHubVersion() const;
    void displayHubName() const;
};

#endif