# Task Manager (C++)

A small task manager written in C++ to practice object-oriented programming: classes, encapsulation, constructors, and containers from the standard library.

> **Status:** work in progress. See the roadmap below.

## Features

- Create tasks with a title and a priority
- Mark tasks as done
- Remove tasks by index (with input validation)
- Print all tasks with their status

## Project structure

| File | Purpose |
|---|---|
| `task.h` / `task.cpp` | `Task` class: title, priority, done status |
| `taskManager.h` / `taskManager.cpp` | `TaskManager` class: stores tasks in a `std::vector` and manages them |
| `main.cpp` | Entry point with a small demo |
| `CMakeLists.txt` | Build configuration |

## Build and run

Requirements: a C++17 compiler (g++ or clang++) and CMake 3.x or newer.

```bash
git clone https://github.com/stanKendy/task-manager-cpp.git
cd task-manager-cpp
cmake -S . -B build
cmake --build build
./build/<executable-name>
```

> Replace `project` with the name defined in `add_executable(...)` in `CMakeLists.txt`.

## Example output

```
[X] Buy milk (Priority 2)
[ ] Buy salt (Priority 4)
[ ] Sell salt (Priority 5)
[X] Buy meat (Priority 6)
[X] Sell meat (Priority 7)
```

Invalid indexes are rejected instead of crashing the program:

```
Invalid index
```

## What I practiced

- Separating declarations (`.h`) from implementations (`.cpp`)
- Encapsulation with `private` data and public getters
- Constructors and member initializer lists
- `std::vector` and index validation
- Passing objects by `const` reference

## Roadmap

- [ ] Interactive command-line menu
- [ ] Save and load tasks from a file
- [ ] `DeadlineTask` class using inheritance
- [ ] Unit tests

## Author

Kenoy Stanley Djiekep Emo, Applied Computer Science student at Hochschule Worms.
