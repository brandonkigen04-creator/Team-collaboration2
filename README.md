1. PROJECT OVERVIEW 
 * What it entails: This project designs, analyzes, and compares different algorithmic approaches for generating the Fibonacci series (including recursive, iterative, memoization, and tabulation techniques) and applies the optimal iterative method to build a scalable Customer Loyalty Reward System.
2.PROJECT STRUCTURE 
 * What it entails: The modular organization of the codebase, separating core algorithmic logic from application features:
   * recursive_fibonacci.py: Implements the direct recursive Fibonacci function and series generator.
   * iterative_fibonacci.py: Implements the array-based iterative Fibonacci and customer loyalty reward calculation.
   * dynamic_programming.py: Contains top-down memoization (lru_cache) and bottom-up tabulation implementations.
   * performance_analysis.py: Benchmarks the execution times for different approaches up to n = 30.
3. Requirements
 * What it entails: The software and environment dependencies needed to execute the project successfully:
   * Python 3.x environment.
   * Standard Python library modules (such as functools for the @lru_cache decorator used in memoization).
4. How to Compile
 * What it entails: Because Python is an interpreted language rather than a compiled language, explicit pre-compilation steps are not required. Source files are executed directly by the Python interpreter.
5. How to Run
 * What it entails: Instructions for executing the script from the command line:
   * Open a terminal in the project directory.
   * Run the main script or specific modules using the command: python <script_name>.py (e.g., executing display_rewards(10) or print(fibonacci_iterative(10))).
6. Test Case
 * What it entails: Validating the application logic with sample inputs. For instance, running the customer loyalty reward system for 6 years (display_rewards(6)) produces the following sample output:
   * Year 0: 0 reward points
   * Year 1: 1 reward point
   * Year 2: 1 reward point
   * Year 3: 2 reward points
   * Year 4: 3 reward points
   * Year 5: 5 reward points
   * Year 6: 8 reward points
7. Project Report
 * What it entails: A comprehensive summary of findings from the case study:
   * Recursive Approach: Evaluates O(2^n) exponential time complexity and highlights inefficiency due to overlapping subproblems, making it unsuitable for thousands of customers.
   * Iterative Approach: Implements an array-based loop achieving O(n) time complexity, eliminating repeated calculations and recursion-stack overhead.
   * Dynamic Programming: Explores top-down memoization and bottom-up tabulation, demonstrating how caching reduces time complexity to O(n).
   * Performance Analysis (n = 30): Notes that the recursive approach takes 0.091 seconds, whereas iterative, memoization, and tabulation methods execute almost instantaneously (e.g., memoization takes \approx 8.05 \times 10^{-8} seconds).
   * Conclusion & Recommendation: Recommends the iterative array-based approach as the most simple, reliable, and scalable solution for the customer loyalty reward system.
8. Team Members and Work Distribution
 * What it entails: Equal division of labor among group members, tracking individual contributions and GitHub handles.
9. Team Members and Contributions

  * Brandon Kigen — Research and introduction to the Fibonacci series.
  * Chris Nyamasyo — Implementation of the recursive approach.
  * Sydney Langat — Implementation of the iterative array approach.
  * Prince  Munene — Implementation of dynamic programming using memoization.
  * John Victor — Performance testing, algorithm comparison, and documentation.
