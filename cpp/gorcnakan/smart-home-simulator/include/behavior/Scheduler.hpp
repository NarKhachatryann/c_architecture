#ifndef SCHEDULER_HPP
#define SCHEDULER_HPP

#include <iostream>
#include <thread>
#include <chrono>

class Scheduler {
public:
    void executeAfterDelay(int milliseconds);
    void executeAtTime(const std::chrono::system_clock::time_point& targetTime);
};

#endif