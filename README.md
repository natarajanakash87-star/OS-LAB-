# OS-LAB-
OS LAB – ALL 15 EXPERIMENTS
Experiment 1 – Installation of Windows Operating System

Aim:
To study the installation and basic verification of the Windows Operating System.

Important commands:

winver – displays Windows version
systeminfo – displays detailed system information
hostname – displays computer name
diskpart – manages disks and partitions
list disk – lists available disks
slmgr /xpr – checks Windows activation status
ipconfig – displays network configuration

Result:
The Windows operating system installation and system configuration were successfully verified.

Experiment 2 – UNIX Commands and Shell Programming

Aim:
To study basic UNIX commands and implement simple programs using shell scripting.

Important UNIX commands:

pwd – present working directory
ls – list files
cd – change directory
mkdir – create directory
rmdir – remove directory
cat – display/create file
cp – copy file
mv – move/rename file
rm – remove file
grep – search text
sort – sort data
wc – count lines, words and characters
head – display first lines
tail – display last lines
who – display logged-in users
date – display date/time

Shell programs included:

Calculator
Factorial
Fibonacci
Greatest of numbers
Largest digit
Sum of odd numbers
Palindrome
Reverse of a number

Result:
UNIX commands and shell programs were successfully executed.

Experiment 3 – System Calls

Aim:
To study and implement important UNIX system calls such as fork(), getpid(), wait(), exit() and close().

Important system calls

fork():
Creates a new child process.

getpid():
Returns the process ID of the current process.

wait():
Makes the parent process wait for the child process.

exit():
Terminates a process.

close():
Closes an opened file descriptor.

Process relationship
Parent Process
      |
    fork()
      |
   ┌──┴──┐
Parent  Child
          |
       getpid()
          |
        exit()

Result:
The system calls were successfully implemented and their process behavior was observed.

Experiment 4 – CPU Scheduling Algorithms

Aim:
To implement and compare CPU scheduling algorithms.

The experiment contains:

FCFS – First Come First Serve
SJF – Shortest Job First
Priority Scheduling
Round Robin
1. FCFS

Processes are executed according to their arrival order.

Example:

P1 → P2 → P3 → P4

Advantage: Simple
Disadvantage: Can cause convoy effect.

2. SJF

The process having the shortest burst time is executed first.

Shortest Burst Time → Highest Priority
3. Priority Scheduling

Each process is assigned a priority. The process with the highest priority executes first.

4. Round Robin

Each process receives a fixed time quantum.

P1 → P2 → P3 → P1 → P2 → ...

Important formulas:

Turnaround Time = Completion Time - Arrival Time


Waiting Time = Turnaround Time - Burst Time

Result:
CPU scheduling algorithms were implemented and waiting time and turnaround time were calculated.

Experiment 5 – Inter Process Communication

Aim:
To implement communication between processes using a pipe.

Pipe

A pipe provides a communication channel between processes.

Process 1
   |
 write()
   |
   ↓
 PIPE
   |
 read()
   |
   ↓
Process 2

Important functions:

pipe()
read()
write()
close()

A pipe generally has:

fd[0] → Read end
fd[1] → Write end

Result:
Inter-process communication using pipes was successfully implemented.

Experiment 6 – Semaphore

Aim:
To implement synchronization between processes/threads using semaphores.

Semaphore

A semaphore is a synchronization mechanism used to control access to shared resources.

Two important operations:

wait() / P()
signal() / V()
Example
          Shared Resource
                |
       ┌────────┴────────┐
       ↓                 ↓
   Process 1         Process 2
       |                 |
     wait()           wait()
       |                 |
   Critical         Critical
   Section          Section
       |                 |
    signal()          signal()

Purpose:

Prevent race conditions
Provide mutual exclusion
Synchronize processes/threads

Result:
Semaphore-based synchronization was successfully implemented.

Experiment 7 – Banker's Algorithm

Aim:
To implement the Banker's Algorithm for deadlock avoidance.

The algorithm determines whether the system is in a safe state before allocating resources.

Important matrices

Available

Resources currently available.

Max

Maximum resources required by each process.

Allocation

Resources currently allocated.

Need

Need = Max - Allocation
Basic process
Available Resources
        ↓
Calculate Need
        ↓
Find process whose Need ≤ Available
        ↓
Execute process
        ↓
Release allocated resources
        ↓
Update Available
        ↓
Safe Sequence

If all processes can finish:

SAFE STATE

Otherwise:

UNSAFE STATE

Result:
Banker's Algorithm was successfully implemented to determine the safe state of the system.

Experiment 8 – Deadlock Detection

Aim:
To implement a deadlock detection algorithm and determine whether a deadlock exists.

Deadlock

Deadlock occurs when processes wait indefinitely for resources held by other processes.

Example:

P1 holds R1 → waits for R2
P2 holds R2 → waits for R1
P1 ─── waits ───> R2
 ↑                |
 |                ↓
R1 <──── held ─── P2

The algorithm checks whether processes can complete with the currently available resources.

Result:

No Deadlock

or

Deadlock Detected

Result:
The deadlock detection algorithm was successfully implemented.

Experiment 9 – Threading

Aim:
To implement threads using POSIX threads.

Thread

A thread is the smallest unit of CPU execution within a process.

Important functions:

pthread_create()
pthread_join()

Basic flow:

Main Program
     |
pthread_create()
     |
 ┌───┴────┐
Thread 1  Thread 2
   |         |
 Work      Work
   |         |
 └────┬────┘
      ↓
pthread_join()
      ↓
 Main
Advantages
Faster execution
Resource sharing
Better responsiveness
Parallel execution

Result:
POSIX threads were successfully created and executed.

Experiment 10 – Paging

Aim:
To implement the paging technique and perform logical-to-physical address translation.

Paging

Paging divides:

Logical Memory → Pages
Physical Memory → Frames

A logical address consists of:

Page Number + Offset

The page number is mapped to a frame using the page table.

Address translation
Logical Address
      |
      ↓
Page Number + Offset
      |
      ↓
Page Table
      |
      ↓
Frame Number
      |
      ↓
Physical Address

Formula:

Physical Address =
Frame Number × Page Size + Offset

Result:
Paging and logical-to-physical address translation were successfully implemented.

Experiment 11 – Memory Allocation

Aim:
To implement memory allocation techniques.

Three methods are included:

1. First Fit

Allocates the first available block large enough for the process.

Blocks → 100 500 200 300
Process → 180


First suitable block → 500
2. Best Fit

Allocates the smallest suitable block.

Purpose:

Minimize remaining unused space
3. Worst Fit

Allocates the largest available block.

Purpose:

Leave a large remaining block
Comparison
Method	Allocation
First Fit	First suitable block
Best Fit	Smallest suitable block
Worst Fit	Largest suitable block

Result:
First Fit, Best Fit and Worst Fit memory allocation methods were successfully implemented.

Experiment 12 – Page Replacement Algorithms

Aim:
To implement page replacement algorithms and calculate page faults.

Algorithms:

FIFO
LRU
Optimal
FIFO – First In First Out

The page that entered memory first is removed first.

Oldest Page → Replace
LRU – Least Recently Used

The page that has not been used for the longest time is replaced.

Least recently used → Replace
Optimal

Replaces the page that will not be used for the longest time in the future.

Future knowledge → Best replacement
Comparison
Algorithm	Principle
FIFO	Oldest page
LRU	Least recently used
Optimal	Longest future non-use

Important:
Page faults occur when a required page is not present in memory.

Result:
FIFO, LRU and Optimal page replacement algorithms were successfully implemented.

Experiment 13 – File Organization

Aim:
To study different methods of organizing records in files.

Three methods:

Sequential
Direct/Random
Indexed
Sequential Organization

Records are stored one after another.

Record 1 → Record 2 → Record 3 → Record 4

Good for sequential processing.

Direct/Random Organization

Records can be accessed directly using an address/key.

Key → Address → Record

Faster for direct access.

Indexed Organization

An index is maintained to locate records quickly.

Index
 ↓
Record Location
 ↓
Actual Record

Result:
Different file organization techniques were successfully implemented.

Experiment 14 – File Allocation

Aim:
To study file allocation methods used by operating systems.

Three methods:

Sequential/Contiguous Allocation
Linked Allocation
Indexed Allocation
1. Sequential / Contiguous Allocation

File blocks are stored continuously.

[10][11][12][13][14]

Advantage: Fast access
Disadvantage: External fragmentation.

2. Linked Allocation

Each block contains a pointer to the next block.

[10] → [25] → [7] → [18]

Advantage: No need for contiguous blocks.

3. Indexed Allocation

An index block stores addresses of all file blocks.

       Index Block
       /   |   \
      ↓    ↓    ↓
     10   25    7

Result:
File allocation methods were successfully implemented and studied.

Experiment 15 – Disk Scheduling

Aim:
To implement disk scheduling algorithms and calculate disk head movement.

Algorithms:

FCFS
SSTF
SCAN
C-SCAN
1. FCFS

Requests are serviced in the order they arrive.

Request 1 → Request 2 → Request 3 → ...

Simple but may cause large head movement.

2. SSTF

Shortest Seek Time First

The request closest to the current head position is serviced first.

Current Head
     ↓
Closest Request → Service
3. SCAN

The disk head moves in one direction servicing requests and then reverses direction.

It works similar to an elevator.

←────────────→
      Head
→────────────←
4. C-SCAN

Circular SCAN moves in one direction only.

→ → → → → → 
          ↓
←──────────

When it reaches the end, it returns to the beginning and continues servicing in the same direction.

Result:
FCFS, SSTF, SCAN and C-SCAN disk scheduling algorithms were successfully implemented.
