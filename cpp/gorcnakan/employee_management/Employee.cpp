#include "Employee.h"

std::string toString(Role role) {
    switch (role) {
        case Role::Intern: return "Intern";
        case Role::Junior: return "Junior";
        case Role::Middle: return "Middle";
        case Role::Senior: return "Senior";
        default: return "Unknown";
    }
}

std::string toString(EmployeeStatus status) {
    switch (status) {
        case EmployeeStatus::Active: return "Active";
        case EmployeeStatus::OnLeave: return "On Leave";
        case EmployeeStatus::Inactive: return "Inactive";
        case EmployeeStatus::Retired: return "Retired";
        default: return "Unknown";
    }
}

Employee::Employee(const std::string& id, const std::string& name, double salary, Role role, EmploymentType type)
    : employeeID(id), name(name), baseSalary(salary), role(role), employmentType(type), status(EmployeeStatus::Active), rate(0.0) {
    updateRate();
}

void Employee::updateRate() {
    switch (role) {
        case Role::Intern: rate = 0.5; break;
        case Role::Junior: rate = 1.0; break;
        case Role::Middle: rate = 1.5; break;
        case Role::Senior: rate = 2.0; break;
        default: rate = 1.0; break;
    }
}

void Employee::promote() {
    if (role == Role::Intern) role = Role::Junior;
    else if (role == Role::Junior) role = Role::Middle;
    else if (role == Role::Middle) role = Role::Senior;
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
          << ", Role: " << toString(role)
          << ", Status: " << toString(status)
          << ", Rate: " << rate << std::endl;
}


void Employee::updateStatus(EmployeeStatus newStatus) {
    if (newStatus >= EmployeeStatus::Active && newStatus <= EmployeeStatus::Retired) {
        status = newStatus;
    } else {
        std::cerr << "Invalid status update!" << std::endl;
    }
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
        case Role::Senior: return r;
    }
    return r;
}