# Project Name
F1 Simulator

---
## Table of Contents

- [Project Description](#project-description)
- [Installation](#installation)
- [Usage](#usage)
- [Running the Project](#running-the-project)
- [Screenshots](#screenshots)
---

## Project Description
This is an F1 simulation of a race weekend. It uses 12 design patterns, all build in C++.
The design patterns used are:
- Factory Design Pattern
- Template Method Design Pattern
- Observer Design Pattern
- Mediator Design Pattern
- Interpreter Design Pattern
- Builder Design Pattern
- Composite Design Pattern
- Decorator Design Pattern
- Chain Of Responsibility Design Pattern
- State Design Pattern
- Strategy Design Pattern
- Command Design Pattern

---

## Installation

1. **Clone the repository:**
2. **Navigate to the project directory:**
3. **Install dependencies:**
   Install a C++ compiler such as gcc and GDB.

---

## Usage

For ease, this project has a make file. 

---

## Running the Project

1. Open terminal in the project directory.
2. Run the command 'make clean'. This will clean any linker files. The behind the scenes is: rm -f *.o main
3. Run the command 'make'. This will build all linker files (.o files). The command behind the scenes is: g++ -g -o main *.o -std=c++11 and g++ -c -g *.cpp
4. Run the command 'make'. This will run the command in terminal. The command behind the scenes is: ./main

---

## Screenshots

Include screenshots to help users understand what the project looks like. You can add images using the following format:

![Screenshot 1](path/to/screenshot1.png)
*Description of what the screenshot shows.*

![Screenshot 2](path/to/screenshot2.png)
*Description of what the screenshot shows.*

![Screenshot 2](screenshots/screenshot2.png)
*Description of what the screenshot shows.*

---
