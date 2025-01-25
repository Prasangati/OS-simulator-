#include "SimOS.h"
#include <iostream>

int main() {
    // Initialize SimOS with 2 disks, 4MB RAM, and 4KB page size
    SimOS os(2, 4 * 1024 * 1024, 4096);

    // Create a new process
    os.NewProcess();
    std::cout << "Created a new process." << std::endl;

    // Fork a process
    os.SimFork();
    std::cout << "Forked a process." << std::endl;

    // Access memory
    os.AccessMemoryAddress(0x2000);
    std::cout << "Accessed memory address: 0x2000" << std::endl;

    // Request disk read
    os.DiskReadRequest(0, "example.txt");
    std::cout << "Disk read request for 'example.txt' on disk 0." << std::endl;

    // Simulate timer interrupt
    os.TimerInterrupt();
    std::cout << "Timer interrupt triggered." << std::endl;

    // Get current CPU process
    int currentProcess = os.GetCPU();
    std::cout << "Current running process ID: " << currentProcess << std::endl;

    // Get memory usage
    MemoryUsage memUsage = os.GetMemory();
    std::cout << "Memory Usage - Total: " << memUsage.totalMemory
              << " Used: " << memUsage.usedMemory
              << " Free: " << memUsage.freeMemory << std::endl;

    // Terminate process
    os.SimExit();
    std::cout << "Current process terminated." << std::endl;

    return 0;
}
