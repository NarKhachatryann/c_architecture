#include "Utility.h"

std::string toString(Role role) {
    switch (role) {
        case Role::Intern: return "Intern";
        case Role::Junior: return "Junior";
        case Role::Middle: return "Middle";
        case Role::Senior: return "Senior";
        default: return "Unknown Role";
    }
}

std::string toString(EmployeeStatus status) {
    switch (status) {
        case EmployeeStatus::Active: return "Active";
        case EmployeeStatus::OnLeave: return "On Leave";
        case EmployeeStatus::Inactive: return "Inactive";
        case EmployeeStatus::Retired: return "Retired";
        default: return "Unknown Status";
    }
}

std::string toString(EmploymentType type) {
    switch (type) {
        case EmploymentType::FullTime: return "Full-Time";
        case EmploymentType::PartTime: return "Part-Time";
        default: return "Unknown Employment Type";
    }
}
