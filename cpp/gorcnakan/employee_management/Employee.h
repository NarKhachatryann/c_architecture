#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

enum class Role { Intern, Junior, Middle, Senior };
enum class EmploymentType { FullTime, PartTime };
enum class EmployeeStatus { Active, OnLeave, Inactive, Retired };

Role& operator++(Role& r);

class Employee {
private:
    std::string employeeID;
    std::string name;
    double baseSalary;
    Role role;
    EmploymentType employmentType;
    EmployeeStatus status;
    double rate;

protected:
    void updateRate();

public:
    Employee(const std::string& id, const std::string& name, double salary, Role role, EmploymentType type);

    virtual double calculateSalary() const = 0;
    virtual void promote();
    virtual void displayDetails() const;

    void updateStatus(EmployeeStatus newStatus);
    const std::string& getID() const;
    const std::string& getName() const;
    double getBaseSalary() const;
    Role getRole() const;
    double getRate() const ;

    virtual ~Employee() {}
};

#endif
