#include "behavior/Scheduler.hpp"

void Scheduler::executeAfterDelay(int milliseconds) {
    std::cout << "Waiting for " << milliseconds << " milliseconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
    std::cout << "Action triggered after delay!" << std::endl;
}

void Scheduler::executeAtTime(const std::chrono::system_clock::time_point& targetTime) {
    auto now = std::chrono::system_clock::now();
    if (targetTime > now) {
        auto duration = targetTime - now;
        std::this_thread::sleep_for(duration);
        std::cout << "Action triggered at the scheduled time!" << std::endl;
    } else {
        std::cout << "The specified time is in the past!" << std::endl;
    }
}
