#include "PartTimeEmployee.h"
#include <iostream>


PartTimeEmployee::PartTimeEmployee(const std::string& id, const std::string& name, double hourlyWage, double hours, Role role)
    : Employee(id, name, hourlyWage * hours, role, EmploymentType::PartTime), hoursWorked(hours), hourlyWage(hourlyWage) {}


double PartTimeEmployee::calculateSalary() const {
    return hoursWorked * hourlyWage;
}


void PartTimeEmployee::displayDetails() const {
    Employee::displayDetails();
    std::cout << ", Employment Type: Part-Time"
              << ", Hours Worked: " << hoursWorked
              << ", Hourly Wage: $" << hourlyWage
              << ", Calculated Salary: $" << calculateSalary() << std::endl;
}
