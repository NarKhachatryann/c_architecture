#include "Employee.h"

Employee::Employee(const std::string& id, const std::string& name, double salary, Role role, EmploymentType type)
    : employeeID(id), name(name), baseSalary(salary), role(role), employmentType(type), status(EmployeeStatus::Active), rate(0.0) {
    updateRate();
}

void Employee::updateRate() {
    switch (role) {
        case Role::Intern:
            rate = 0.5;
            break;
        case Role::Junior:
            rate = 1.0;
            break;
        case Role::Middle:
            rate = 1.5;
            break;
        case Role::Senior:
            rate = 2.0;
            break;
    }
}

void Employee::promote() {
    if (role != Role::Senior) {
        role = static_cast<Role>(static_cast<int>(role) + 1);
        updateRate();
    }
}

double Employee::getBaseSalary() const {
    return baseSalary;
}

Role Employee::getRole() const {
    return role;
}

double Employee::getRate() const {
    return rate;
}

void Employee::displayDetails() const {
    std::cout << "ID: " << employeeID
              << ", Name: " << name
              << ", Base Salary: " << baseSalary
              << ", Role: " << static_cast<int>(role)
              << ", Status: " << static_cast<int>(status)
              << ", Rate: " << rate << std::endl;
}


void Employee::updateStatus(EmployeeStatus newStatus) {
    status = newStatus;
}


const std::string& Employee::getID() const {
    return employeeID;
}

const std::string& Employee::getName() const {
    return name;
}

Role& operator++(Role& r) {
    switch (r) {
        case Role::Intern: return r = Role::Junior;
        case Role::Junior: return r = Role::Middle;
        case Role::Middle: return r = Role::Senior;
        case Role::Senior: return r; // Already at max level
    }
    return r;
}