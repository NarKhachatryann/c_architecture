#include "behavior/Action.hpp"
#include <chrono>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <iostream>


Action::Action() {
    initialize();
}

Action::Action(const std::string& name, const std::string& type, const std::string& status,
               const std::string& description, const std::string& timestamp, const std::string& location)
    : actionName(name), actionType(type), actionStatus(status), actionDescription(description),
      actionTimestamp(timestamp), actionLocation(location) {
    initialize();
    std::cout << "Action created with name: " << actionName << std::endl;
    std::cout << "Action type: " << actionType << std::endl;
    std::cout << "Action status: " << actionStatus << std::endl;
    std::cout << "Action description: " << actionDescription << std::endl;
    std::cout << "Action timestamp: " << actionTimestamp << std::endl;
    std::cout << "Action location: " << actionLocation << std::endl;
    std::cout << "Action initialized at " << actionTimestamp << std::endl;
    std::cout << "Action location: " << actionLocation << std::endl;
}

void Action::initialize() {
    actionName = "DefaultAction";
    actionType = "Generic";
    actionStatus = "Pending";
    actionDescription = "Default description";
    actionLocation = "Default Location";

    auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);

    std::ostringstream oss;
    oss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %H:%M:%S");
    actionTimestamp = oss.str();

    std::cout << "Action initialized at " << actionTimestamp << std::endl;
}

void Action::execute() {
    actionStatus = "Executing";
    std::cout << "Executing action: " << actionName << " (" << actionType << ")." << std::endl;
}

void Action::cancel() {
    actionStatus = "Cancelled";
    std::cout << "Action '" << actionName << "' has been cancelled." << std::endl;
}

void Action::update() {
    actionTimestamp = "Updated timestamp";
    std::cout << "Action '" << actionName << "' has been updated." << std::endl;
}

void Action::addAction(const std::string& actionName) {
    
    std::cout << "Action '" << actionName << "' has been added to the system." << std::endl;
}

void Action::removeAction(const std::string& actionName) {
    std::cout << "Action '" << actionName << "' has been removed from the system." << std::endl;
}

void Action::listActions() {
    std::cout << "Listing actions:" << std::endl;
    std::cout << "- Name: " << actionName << std::endl;
    std::cout << "- Type: " << actionType << std::endl;
    std::cout << "- Status: " << actionStatus << std::endl;
    std::cout << "- Description: " << actionDescription << std::endl;
    std::cout << "- Timestamp: " << actionTimestamp << std::endl;
    std::cout << "- Location: " << actionLocation << std::endl;
}

std::string Action::getActionName() const {
    return actionName;
}

std::string Action::getActionType() const {
    return actionType;
}

std::string Action::getActionStatus() const {
    return actionStatus;
}

std::string Action::getActionDescription() const {
    return actionDescription;
}

std::string Action::getActionTimestamp() const {
    return actionTimestamp;
}

std::string Action::getActionLocation() const {
    return actionLocation;
}

void Action::setActionName(const std::string& name) {
    actionName = name;
}

void Action::setActionType(const std::string& type) {
    actionType = type;
}

void Action::setActionStatus(const std::string& status) {
    actionStatus = status;
}

void Action::setActionDescription(const std::string& description) {
    actionDescription = description;
}

void Action::setActionTimestamp(const std::string& timestamp) {
    actionTimestamp = timestamp;
}

void Action::setActionLocation(const std::string& location) {
    actionLocation = location;
}

void Action::displayActionStatus() const {
    std::cout << "Action Status: " << actionStatus << std::endl;
}

void Action::displayActionLocation() const {
    std::cout << "Action Location: " << actionLocation << std::endl;
}

void Action::displayActionDescription() const {
    std::cout << "Action Description: " << actionDescription << std::endl;
}

void ActionManager::addAction(const Action& action) {
    actions.push_back(action);
    std::cout << "Action '" << action.getActionName() << "' has been added to the manager." << std::endl;
}

void ActionManager::removeAction(const std::string& actionName) {
    if(actions.empty()) {
        std::cout << "No actions to remove." << std::endl;
        return;
    }
    auto it = std::remove_if(actions.begin(), actions.end(),
            [&actionName](const Action& action) { return action.getActionName() == actionName; });
    actions.erase(it, actions.end());
    std::cout << "Action '" << actionName << "' has been removed from the manager." << std::endl;
}

void ActionManager::listActions() const {
    std::cout << "Listing actions in the manager:" << std::endl;
    for (const auto& action : actions) {
        std::cout << "- Name: " << action.getActionName() << std::endl;
        std::cout << "- Type: " << action.getActionType() << std::endl;
        std::cout << "- Status: " << action.getActionStatus() << std::endl;
        std::cout << "- Description: " << action.getActionDescription() << std::endl;
        std::cout << "- Timestamp: " << action.getActionTimestamp() << std::endl;
        std::cout << "- Location: " << action.getActionLocation() << std::endl;
    }
}

Action ActionManager::getAction(const std::string& actionName) const {
    for (const auto& action : actions) {
        if (action.getActionName() == actionName) {
            return action;
        }
    }
    std::cout << "Action '" << actionName << "' not found in the manager." << std::endl;
    return Action();
}