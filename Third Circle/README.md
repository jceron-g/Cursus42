# Third Circle - 42 Projects

Welcome to the **Third Circle** of 42 projects! This directory contains advanced-level projects that focus on **systems programming, process synchronization, concurrency, and shell implementation**. These projects require a deep understanding of low-level programming and system interactions.

## 📂 Projects Overview

### **Minishell** - Building a Simple Shell
**Minishell** is a project that involves recreating a simplified version of the Unix shell. The goal is to understand how a shell interprets commands, manages processes, and interacts with the operating system. Key learning aspects include:
- Parsing and executing shell commands.
- Managing multiple processes using `fork()`, `execve()`, and `waitpid()`.
- Handling signals and user input.
- Implementing redirections and pipes.

This project provides an in-depth look at how terminal-based shells work and prepares for more complex system programming tasks.

### **Philosophers** - Concurrency and Synchronization
**Philosophers** is a project based on the classic **Dining Philosophers Problem**, which is used to illustrate issues related to concurrent programming. The goal is to manage multiple threads representing philosophers who alternate between thinking, eating, and sleeping while avoiding **deadlocks** and **race conditions**. Key concepts covered include:
- Multithreading with `pthread_create()` and `pthread_join()`.
- Synchronization using **mutexes** (`pthread_mutex_lock()` and `pthread_mutex_unlock()`).
- Preventing deadlocks and starvation using proper resource management.

This project is an essential introduction to **concurrent programming** and prepares for real-world applications involving parallel execution.

## 🔍 Key Learning Objectives
- **Process and thread management**: Understanding process creation, execution, and communication.
- **Concurrency control**: Implementing multithreading and avoiding race conditions.
- **System calls and signals**: Working with system-level functions and inter-process communication.

These projects are among the most challenging in the 42 curriculum but provide critical knowledge for system programming and software engineering.

---

For further details on each project, refer to their respective directories.

This repository is intended as a **learning resource** and not for direct copying. If you're working on these projects, use this repository for inspiration or guidance if you're stuck. The best way to learn is by thinking through problems and implementing solutions on your own.

**Author:** [José Antonio Cerón](https://github.com/jceron-g)

