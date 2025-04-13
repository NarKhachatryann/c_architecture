#ifndef ACTION_HPP
#define ACTION_HPP
#include <iostream>
#include <string>
#include <vector>

class Action {
private:
    std::string actionName;
    std::string actionType;
    std::string actionStatus;
    std::string actionDescription;
    std::string actionTimestamp;
    std::string actionLocation;

public:

    void initialize();
    void execute();
    void cancel();
    void update();
    void addAction(const std::string& actionName);
    void removeAction(const std::string& actionName);
    void listActions();

    std::string getActionName() const;
    std::string getActionType() const;
    std::string getActionStatus() const;
    std::string getActionDescription() const;
    std::string getActionTimestamp() const;
    std::string getActionLocation() const;

    void setActionName(const std::string& name);
    void setActionType(const std::string& type);
    void setActionStatus(const std::string& status);
    void setActionDescription(const std::string& description);
    void setActionTimestamp(const std::string& timestamp);
    void setActionLocation(const std::string& location);

    void displayActionStatus() const;
    void displayActionLocation() const;
    void displayActionDescription() const;
};

#endif