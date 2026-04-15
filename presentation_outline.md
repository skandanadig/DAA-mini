# DAA Mini Project - Presentation Outline

Here is the slide-by-slide content for your PowerPoint presentation. You can easily copy and paste these points directly into your slides!

---

## Slide 1: Title Slide
**Title:** Design and Analysis of Algorithms - Mini Project
**Subtitle:** Algorithm Implementations and Analysis
**Team Members:**
- [Placeholder: Team Member 1 Name & Roll No.]
- [Placeholder: Team Member 2 Name & Roll No.]
- [Placeholder: Team Member 3 Name & Roll No.]
- [Placeholder: Team Member 4 Name & Roll No.]

---

## Slide 2: Project Overview & Algorithms
**Title:** Problems Addressed
**Content:**
In this project, we explored and implemented three distinct algorithmic strategies to solve classic computational problems:
1. **Decrease and Conquer:** Modified Fixed Point Search
2. **Divide and Conquer:** Maximum Subarray Problem
3. **Dynamic Programming:** 0/1 Knapsack Problem

---

## Slide 3: Algorithm 1 - Problem Statement
**Title:** 1. Decrease & Conquer: Modified Fixed Point
**Content:**
* **Problem Statement:** 
  Given a sorted array of `n` distinct integers, we need to find an index `i` such that the element at `A[i]` is exactly equal to twice its index: `A[i] = 2 * i`.
* **Approach:**
  Instead of a linear search, we use a modified Binary Search. Since the array is sorted, we can check the middle element. Depending on whether `A[mid]` is strictly less than or greater than `2 * mid`, we can instantly eliminate half of the remaining array search space.

---

## Slide 4: Algorithm 1 - Complexity Analysis
**Title:** 1. Decrease & Conquer: Complexity
**Content:**
* **Time Complexity: O(log n)**
  * *Reasoning:* The algorithm halves the search space at every step, creating a logarithmic time curve. This is significantly faster than a purely linear O(n) check.
* **Space Complexity:** 
  * **O(log n)** if using recursion (due to the recursive call stack).
  * **O(1)** if using an iterative while-loop approach, as no external data structures are needed.

---

## Slide 5: Algorithm 2 - Problem Statement
**Title:** 2. Divide & Conquer: Maximum Subarray Sum
**Content:**
* **Problem Statement:**
  Given a one-dimensional array of numbers (containing both positive and negative values), find the contiguous subarray that yields the largest possible sum.
* **Approach:**
  The array is recursively divided into two halves. The maximum contiguous subarray must lie in one of three places: entirely in the left half, entirely in the right half, or spanning directly across the midpoint.

---

## Slide 6: Algorithm 2 - Complexity Analysis
**Title:** 2. Divide & Conquer: Complexity
**Content:**
* **Time Complexity: O(n log n)**
  * *Reasoning:* The array is divided in half recursively reaching a depth of O(log n). At each level, finding the "crossing sum" requires scanning the elements, which takes O(n) time. 
* **Space Complexity: O(log n)**
  * *Reasoning:* No extra arrays are created, but the recursive function calls require O(log n) memory on the system call stack.

---

## Slide 7: Algorithm 3 - Problem Statement
**Title:** 3. Dynamic Programming: 0/1 Knapsack
**Content:**
* **Problem Statement:**
  Given a set of items, each with a specific weight and value, determine the combination of items you should pick to maximize the total value, without exceeding a specific weight capacity `W`. You cannot break items (0/1 constraint).
* **Approach:**
  Using a bottom-up Dynamic Programming approach, we build a 2D table to store the optimal values of smaller sub-problems, deciding step-by-step whether it is better to "take" or "leave" each item at various weight capacities.

---

## Slide 8: Algorithm 3 - Complexity Analysis
**Title:** 3. Dynamic Programming: Complexity
**Content:**
* **Time Complexity: O(n * W)**
  * *Reasoning:* Where `n` is the number of items and `W` is the knapsack capacity. The algorithm utilizes a nested loop to calculate the value for every cell in a 2D table of size `n x W`.
* **Space Complexity: O(n * W)**
  * *Reasoning:* Memory is required to store the 2D array `dp[n+1][W+1]`, which caches the results of the sub-problems to prevent redundant calculations.

---

## Slide 9: Slide 9
**Title:** Thank You!
**Content:**
* Any Questions?
