# CPP Mini Projects — Gym · Salary · School

[![Language: C++](https://img.shields.io/badge/language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)]
[![Status: Complete](https://img.shields.io/badge/status-Complete-success.svg)]

Professional collection of three small, well-structured C++ console programs demonstrating menu-driven design, input validation, and modular functions.

---

## Table of Contents
- [Project Overview](#project-overview)  
- [Files & Icons](#files--icons)  
- [Features](#features)  
- [Build & Run](#build--run)  
- [Examples](#examples)  
- [Improvements & Notes](#improvements--notes)  
- [Contributing](#contributing)  
- [License](#license)  
- [References](#references)

---

## Project Overview
This repository contains three standalone C++ console programs intended as clean, teachable examples and small utilities:

- Clear function separation
- Input validation using `std::cin` and `std::numeric_limits`
- Readiness for small refactors (e.g., OOP migration or file I/O)
- Suitable for portfolio inclusion and further extension

---

## Files & Icons

- 🏋️‍♂️ **`gym.c++`**  
  ![file-gym](https://img.shields.io/badge/file-gym.c%2B%2B-blue.svg)  
  **Description:** Menu-driven gym workout selector with password-protected entry and predefined training systems (Upper/Lower, Push/Pull/Legs, Full Body). Focus: control flow and user interaction.

- 💰 **`salary.c++`**  
  ![file-salary](https://img.shields.io/badge/file-salary.c%2B%2B-yellow.svg)  
  **Description:** Employee salary calculator that computes overtime compensation and total salary. Focus: arithmetic, conditional logic, and input validation.

- 🎓 **`school.c++`**  
  ![file-school](https://img.shields.io/badge/file-school.c%2B%2B-orange.svg)  
  **Description:** Student grade processor accepting subject scores, computing totals/averages and mapping to letter grades. Focus: validation, separation of concerns, and formatting output.

> Each file is standalone — compile and run individually.

---

## Features
- Small, readable codebases ideal for learning/refinement
- Robust input validation (`cin.fail()` + `numeric_limits`)
- Clear function boundaries (I/O, processing, output)
- No `using namespace std;` — follows best practice to avoid polluting the global namespace
- Easily extensible to:
  - OOP structure
  - File-based input/output
  - Unit tests

---

## Build & Run

### Requirements
- `g++` (recommended `g++` >= 7) or any modern C++ compiler
- Tested with `-std=c++17` but compatible with C++11 where shown features used

### Compile commands
Run these from the repository root.

```bash
# Compile gym
g++ -std=c++17 -O2 gym.c++ -o gym

# Compile salary
g++ -std=c++17 -O2 salary.c++ -o salary

# Compile school
g++ -std=c++17 -O2 school.c++ -o school
