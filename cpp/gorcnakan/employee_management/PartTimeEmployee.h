#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "Employee.h"

class PartTimeEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyWage;

public:
    PartTimeEmployee(const std::string& id, const std::string& name, double hourlyWage, double hours, Role role);

    double calculateSalary() const override;
    void displayDetails() const override;
};

#endif
