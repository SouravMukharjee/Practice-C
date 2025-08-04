# Practice‑C 📚

This repository is a hands‑on collection of coding exercises and mini‑projects, organized into:

- **`basic/`** — Foundational C problems for learning syntax, control structures, data types, and problem logic.
- **`advanced/`** — More complex C/C++ challenges covering pointers, dynamic data structures, recursion, file I/O, and modular code.
- **`project/`** — Capstone mini‑projects—longer, self‑contained applications demonstrating design, C++ techniques (OO, STL), and build management.
- **`README.md`** — (This file) outlines how the materials are organized and how to get started.

---

## 🧠 Table of Contents
1. [What’s Inside](#whats-inside)  
2. [Repository Structure](#repository-structure)  
3. [Setup & Prerequisites](#setup--prerequisites)  
4. [How to Run Problems](#how-to-run-problems)  
5. [Project Builds](#project-builds)  
6. [Contribution Guidelines](#contribution-guidelines)  
7. [License & Credits](#license--credits)

---

## 1. What’s Inside

- **`basic/`**: C files for beginner-level exercises (e.g. loops, arrays, if/else, functions).
- **`advanced/`**: Mixed C/C++ files exploring more advanced topics (e.g. linked lists, recursion, modular code, STL algorithms).
- **`project/`**: Larger-scale, multi-file projects demonstrating object-oriented design, modular compilation, and simple UI/CLI apps.
- **Language profile**: Over 98 % C++ and under 2 % C—making this great for transitioning from procedural C to modern C++ styles :contentReference[oaicite:3]{index=3}.


## 2. Repository Structure

```

Practice‑C/
├── basic/
│   ├── problem\_01.c
│   ├── problem\_02.c
│   └── ...
├── advanced/
│   ├── advanced\_01.cpp
│   ├── recursion\_inquiry.cpp
│   └── ...
├── project/
│   ├── my\_app/
│   │   ├── src/
│   │   ├── Makefile or CMakeLists.txt
│   │   └── README.md (use instructions)
│   └── ...
└── README.md  ← you’re here! ✔

---

## 3. Setup & Prerequisites

To work with these exercises and projects:

- Install a C/C++ toolchain—e.g. `gcc`, `g++` (≥ 9.x) or Microsoft/MSVC.
- On Linux/macOS: you can install via your package manager (`build-essential`, `clang`, `cmake`).
- Ensure:
  ```bash
  g++ --version
  clang --version  # any one compiler should work
````

* *(Optional)* Add an editor/IDE with linting and formatting (e.g. VS Code, Vim, CLion, Code::Blocks).
* Clone the repo recursively to ensure subfolders with config files are pulled:

  ```bash
  git clone https://github.com/SouravMukharjee/Practice-C.git
  ```

---

## 4. How to Run Problems

### In `basic/` & `advanced/`:

```bash
cd basic
g++ your_problem.c -o your_problem   # For C files: save as `.c`
./your_problem

cd ../advanced
g++ advanced_01.cpp -o advanced_01
./advanced_01
```

Use compile flags for compliance:

```bash
g++ -Wall -Wextra -Wpedantic -std=c++17 advanced_01.cpp
```

---

## 5. Project Builds

Each project inside the `project/` folder typically includes its own build configuration:

```bash
cd project/YourProject
# If Makefile provided:
make
./YourProject

# Or if using CMake:
mkdir build && cd build
cmake .. && make
./YourProject
```

Refer to the `README.md` inside each project—many include instructions for platform support or external libraries.

---

## 6. Contribution Guidelines

Your contributions are welcome! Whether it's a bug fix, new exercise, or code improvement:

1. **Fork** the repo.
2. Create descriptive branches like `basic/new-problem-2` or `advanced/memory-manager-refactor`.
3. Submit a **PR**—with a short description, added value, and review.
4. Use consistent style in C/C++: e.g. `snake_case.c` for C, `CamelCase.cpp` for C++.
5. Keep formatting, comments, and modular layout tidy—include compile instructions if needed.

---

## 7. License & Credits

* This repo does **not include a license file**—use it as *educational reference*.
* Great if contributors add a LICENSE (e.g. MIT, Apache 2.0).
* Original creator: Sourav Mukharjee. Built for lab and self-practice purposes.

https://souravfin.wordpress.com/souravs-codehub/
---

## 🧩 Why This README?

Sourav’s repo homepage lists only "Problem solving and lab work" with folders like `basic`, `advanced`, `project`, and usage of both C and C++ approaches ([GitHub][1]).
This README ensures anyone new can jump in—understand folder usage, compile code, add exercises—and potentially inspire others to practice and share together.

Enjoy coding, learning, and building! 🚀
*Sourav Mukherjee’s Practice‑C series continues to grow—contribute if you like!*

[1]: https://github.com/SouravMukharjee/Practice-C "GitHub - SouravMukharjee/Practice-C: Problem solving and lab work"
[2] https://souravfin.wordpress.com/souravs-codehub/
