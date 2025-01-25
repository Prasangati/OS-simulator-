# SimOS - Operating System Simulator

## Overview
SimOS is a lightweight operating system simulator written in C++ that models key OS functionalities, including process management, memory management, CPU scheduling, and disk operations. It provides an interface to simulate process creation, memory access, disk I/O, and CPU scheduling using modular components.

## Features
- **Process Management**
  - Create, fork, and terminate processes.
  - Track parent-child relationships.
  - Handle zombie and waiting processes.

- **Memory Management**
  - Simulates paging with configurable RAM size and page size.
  - Tracks memory allocation and access for processes.

- **CPU Scheduling**
  - Simulates scheduling using a ready queue.
  - Supports timer interrupts for preemptive scheduling.

- **Disk Management**
  - Handles disk read requests for multiple disks.
  - Manages disk queues for efficient processing.

## Installation

To compile and run SimOS, ensure you have a C++ compiler installed (GCC or Clang) and run the following commands:

```sh
# Clone the repository
git clone https://github.com/yourusername/simos.git
cd simos

# Compile the source code
 g++ -o simos main.cpp CPUManager.cpp MemoryManager.cpp DiskManager.cpp ProcessManager.cpp -std=c++17

# Run the executable
./simos
```

## Usage

### 1. Initializing SimOS
Create an instance of SimOS with the number of disks, amount of RAM, and page size:

```cpp
SimOS os(2, 4 * 1024 * 1024, 4096); // 2 disks, 4MB RAM, 4KB pages
```

### 2. Creating Processes
```cpp
os.NewProcess();  // Create a new process
```

### 3. Forking a Process
```cpp
os.SimFork();  // Simulate a process fork
```

### 4. Accessing Memory
```cpp
os.AccessMemoryAddress(0x2000);  // Access memory at address 0x2000
```

### 5. Disk Read Operations
```cpp
os.DiskReadRequest(0, "data.txt");  // Request to read data.txt from disk 0
```

### 6. Handling CPU Scheduling
```cpp
os.TimerInterrupt();  // Trigger a timer interrupt to switch processes
```

### 7. Checking Process Execution
```cpp
int currentProcess = os.GetCPU();
std::cout << "Current process ID: " << currentProcess << std::endl;
```

### 8. Terminating Processes
```cpp
os.SimExit();  // Terminate the current process
```

## Project Structure
```
.
|-- include/
|   |-- CPUManager.h
|   |-- MemoryManager.h
|   |-- DiskManager.h
|   |-- ProcessManager.h
|   |-- SimOS.h
|
|-- src/
|   |-- CPUManager.cpp
|   |-- MemoryManager.cpp
|   |-- DiskManager.cpp
|   |-- ProcessManager.cpp
|   |-- main.cpp
|
|-- README.md
|-- utility.h
```

## Future Improvements
- Implement different CPU scheduling algorithms (e.g., priority scheduling, SJF).
- Enhance memory management with page replacement strategies.
- Add logging functionality for tracking operations.
- Introduce graphical UI for visualization.

## License
This project is open-source and available under the [MIT License](LICENSE).

## Author
**Prasanga Tiwari**

