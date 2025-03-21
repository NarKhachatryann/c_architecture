#include <iostream>
#include <vector>
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
#include "Utility.h"

void displayMenu() {
    std::cout << "\n--- Employee Management System ---\n";
    std::cout << "1. Add Full-Time Employee\n";
    std::cout << "2. Add Part-Time Employee\n";
    std::cout << "3. Display All Employees\n";
    std::cout << "4. Update Employee Status\n";
    std::cout << "5. Promote an Employee\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    std::vector<Employee*> employees;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string id, name;
                double salary;
                int roleInt;
                std::cout << "Enter ID: ";
                std::cin >> id;
                std::cout << "Enter Name: ";
                std::cin >> name;
                std::cout << "Enter Base Salary: ";
                std::cin >> salary;
                std::cout << "Enter Role (0-Intern, 1-Junior, 2-Middle, 3-Senior): ";
                std::cin >> roleInt;

                Role role = static_cast<Role>(roleInt);
                employees.push_back(new FullTimeEmployee(id, name, salary, role));
                std::cout << "Full-Time Employee Added Successfully!\n";
                break;
            }
            case 2: {
                std::string id, name;
                double hourlyWage, hours;
                int roleInt;
                std::cout << "Enter ID: ";
                std::cin >> id;
                std::cout << "Enter Name: ";
                std::cin >> name;
                std::cout << "Enter Hourly Wage: ";
                std::cin >> hourlyWage;
                std::cout << "Enter Hours Worked: ";
                std::cin >> hours;
                std::cout << "Enter Role (0-Intern, 1-Junior, 2-Middle, 3-Senior): ";
                std::cin >> roleInt;

                Role role = static_cast<Role>(roleInt);
                employees.push_back(new PartTimeEmployee(id, name, hourlyWage, hours, role));
                std::cout << "Part-Time Employee Added Successfully!\n";
                break;
            }
            case 3: {
                for (const auto& employee : employees) {
                    employee->displayDetails();
                }
                break;
            }
            case 4: {
                std::string id;
                int statusInt;
                std::cout << "Enter Employee ID: ";
                std::cin >> id;
                std::cout << "Enter New Status (0-Active, 1-On Leave, 2-Inactive, 3-Retired): ";
                std::cin >> statusInt;

                EmployeeStatus newStatus = static_cast<EmployeeStatus>(statusInt);
                bool found = false;
                for (const auto& employee : employees) {
                    if (employee->getID() == id) {
                        employee->updateStatus(newStatus);
                        std::cout << "Employee Status Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Employee Not Found!\n";
                }
                break;
            }
            case 5: {
                std::string id;
                std::cout << "Enter Employee ID: ";
                std::cin >> id;
                bool found = false;
                for (const auto& employee : employees) {
                    if (employee->getID() == id) {
                        employee->promote();
                        std::cout << "Employee Promoted Successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Employee Not Found!\n";
                }
                break;
            }
            case 0:
                std::cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    
    for (auto employee : employees) {
        delete employee;
    }
    employees.clear();

    return 0;
}