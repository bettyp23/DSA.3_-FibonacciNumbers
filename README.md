# Fibonacci Timing Comparison: Iterative vs Recursive

## 📋 Description

This project demonstrates and compares the performance of two approaches to computing Fibonacci numbers:
- **Iterative Approach**
- **Recursive Approach**

We analyze the execution time for each method across different values of `n` (5, 15, 25, and 35) by running each computation 5 times and recording the average runtime. This comparison helps illustrate the efficiency differences between both techniques.

## 📁 File Structure

- `main.cpp`: Contains the main function, logic for timing, and printing the results.
- `fibonacci.cpp`: Implements both the iterative and recursive Fibonacci functions.

1. **Compile the program:**
   g++ -o fibonacci main.cpp fibonacci.cpp
   ./fibonacci