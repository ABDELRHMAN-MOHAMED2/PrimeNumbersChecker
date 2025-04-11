# 🔍 Prime Checker

A simple **C++ console program** to check whether a number is **prime** or list **all prime numbers between two numbers**.

---

## ✨ Features

- ✅ **Option 1:** Check if a single number is prime.
- ✅ **Option 2:** List all prime numbers between two numbers.
- 🔒 Strong input validation (handles invalid types, characters, and ranges).
- ♻️ Automatically converts negative numbers to positive before checking.

---

## ⚙️ How It Works

When you run the program, it will ask you to choose between two modes:
1️⃣ Check a single number.  
2️⃣ Check for all prime numbers between two numbers.

Based on your selection, the program guides you step-by-step with prompts and then displays the result(s).

The project is split into two parts:
- `main.cpp`: Handles user input and menu logic.
- `prime.h`: Contains the functions `TrueInput()` and `Prime()`.

---

## ⚠️ Important

**Make sure `prime.h` is placed in the same folder as your `main.cpp` before compiling.**  
If the header file isn't in the same directory, the program won't compile.

---

## 🧪 How to Compile

Using `g++` or any standard C++ compiler:

```bash
g++ main.cpp -o prime_checker
./prime_checker