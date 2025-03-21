#include "PartTimeEmployee.h"
#include <iostream>


PartTimeEmployee::PartTimeEmployee(const std::string& id, const std::string& name, double hourlyWage, double hours, Role role)
    : Employee(id, name, 0.0, role, EmploymentType::PartTime), hoursWorked(hours), hourlyWage(hourlyWage) {}


double PartTimeEmployee::calculateSalary() const {
    return hourlyWage * hoursWorked * getRate();
}


void PartTimeEmployee::displayDetails() const {
    Employee::displayDetails();
    std::cout << ", Employment Type: Part-Time"
              << ", Hours Worked: " << hoursWorked
              << ", Hourly Wage: $" << hourlyWage
              << ", Calculated Salary: $" << calculateSalary() << std::endl;
}
