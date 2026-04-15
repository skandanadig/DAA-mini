# DAA Mini Project - Algorithm Implementations and Analysis

This repository contains the implementations, analysis, and visualizations of three distinct algorithmic strategies to solve classic computational problems. This project was developed as a mini-project for the Design and Analysis of Algorithms (DAA) course.

## Overview

The purpose of this project is to explore these core algorithmic paradigms, apply them to relevant problems, analyze their complexities, and visualize their step-by-step executions.

### Algorithms Addressed

1. **Decrease and Conquer:** Modified Fixed Point Search
   - **Problem:** Given a sorted array of `n` distinct integers, find an index `i` such that the element at `A[i]` is exactly equal to twice its index: `A[i] = 2 * i`.
   - **File:** `decreaseandconquer.c`
   - **Time Complexity:** O(log n)
   - **Space Complexity:** O(1) or O(log n) (depending on iterative/recursive)

2. **Divide and Conquer:** Maximum Subarray Problem
   - **Problem:** Given a one-dimensional array of numbers, find the contiguous subarray that yields the largest possible sum.
   - **File:** `divide&conquer.c`
   - **Time Complexity:** O(n log n)
   - **Space Complexity:** O(log n)

3. **Dynamic Programming:** 0/1 Knapsack Problem
   - **Problem:** Given a set of items with specific weights and values, determine the optimal combination of items to maximize the total value without exceeding capacity `W`.
   - **File:** `dpknapsack.c`
   - **Time Complexity:** O(n * W)
   - **Space Complexity:** O(n * W)

## Interactive Walkthrough / Visualizer

Alongside the C implementations, we have included an interactive web-based algorithm visualizer.

- **File:** `algorithm_visualizer.html`
- Automatically visualizes each of the three algorithms step-by-step logic, recursive flow, and complexity. Just open the `.html` file in any modern web browser to view!

## Additional Materials

- **Presentation Outline:** A complete slide-by-slide guide detailing the project presentation (`presentation_outline.md`).

## Setup and Execution

To compile any of the C files, use a standard C compiler such as `gcc`. 

Example:
```bash
gcc dpknapsack.c -o knapsack
./knapsack
```
