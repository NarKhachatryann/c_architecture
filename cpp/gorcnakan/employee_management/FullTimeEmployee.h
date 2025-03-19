#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "Employee.h"

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(const std::string& id, const std::string& name, double salary, Role role);

    double calculateSalary() const override;
    void displayDetails() const override;
};

#endif
