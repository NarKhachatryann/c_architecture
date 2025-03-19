#include "FullTimeEmployee.h"
#include <iostream>


FullTimeEmployee::FullTimeEmployee(const std::string& id, const std::string& name, double salary, Role role)
    : Employee(id, name, salary, role, EmploymentType::FullTime) {}


double FullTimeEmployee::calculateSalary() const {
    return getBaseSalary() * getRate();
}

void FullTimeEmployee::displayDetails() const {
    Employee::displayDetails();
    std::cout << ", Employment Type: Full-Time"
              << ", Calculated Salary: $" << calculateSalary() << std::endl;
}
