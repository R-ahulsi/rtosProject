This project is an implementation of a Real-Time Operating System designed specifically for the STM32 Nucleo F411 microcontroller. It provides real-time capabilities such as multitasking and scheduling. The project serves as a learning exercise to deepen my understanding of real-time operating systems and low-level embedded programming.

**Usage:**

The RTOS can be run on the STM32 Nucleo F411 board through two methods:

STM32CubeIDE: You can directly run the project by opening it in STM32CubeIDE and flashing it to the board using the built-in tools.

Custom GUI Project: Alternatively, you can use my GUI project to upload the binaries (elf file format) to the STM32 board. The GUI provides an easy interface for selecting the file and uploading to the board.

**Motivation:**

The primary goal of this project is to learn operating system concepts. It focuses on understanding core concepts such as kernel design, task management, and scheduling algorithms. The project also serves as a foundation for developing more complex real-time applications on STM32 microcontrollers.

**Key Features:**

Multitasking Support: Enables concurrent execution of multiple tasks with efficient context switching.


Scheduling Algorithms: Implements various scheduling algorithms such as Round-Robin, Cooperative, and Priority-based scheduling.


UART Communication: Provides UART drivers for serial communication.


LED Control: Allows manipulation of LEDs.


Custom Kernel: Manages task scheduling, interrupts, and inter-task communication.




**Future Work:**

Idle Thread for CPU Utilization: Working on implementing an idle thread that executes when no other tasks are running. This will calculate CPU utilization in real-time and display the metrics on my GUI project.
