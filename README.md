# Design and Analysis of Algorithms

Welcome to the repository for Design and Analysis of Algorithms. This repository contains C implementations of various algorithms commonly studied in the design and analysis of algorithms.

## Table of Contents

1. [Algorithms Overview](#algorithms-overview)
2. [File Structure](#file-structure)
3. [How to Use](#how-to-use)
4. [Contributing](#contributing)
5. [License](#license)

## Algorithms Overview

This repository includes the following algorithms:

- **Graph Algorithms:**
  - Breadth-First Search (BFS)
  - Depth-First Search (DFS)
  - Kruskal's Minimal Spanning Tree
  - Prim's Algorithm

- **Sorting Algorithms:**
  - Heap Sort
  - Merge Sort
  - Quick Sort
  - Strassen's Matrix Multiplication

- **Dynamic Programming and Greedy Algorithms:**
  - Job Sequencing with Deadlines
  - Knapsack Problem
  - Sum of Subset (Backtracking)

- **Mathematical Algorithms:**
  - Factorial
  - Factorial (Recursive)
  - Fibonacci
  - Multiply Matrices

- **Backtracking Algorithms:**
  - Traveling Salesman Problem (TSP)

- **General Algorithms:**
  - General Method

## File Structure

The repository is organized as follows:

```
/algorithms
    /graph
        bfs.c
        dfs.c
        kruskal.c
        prim.c
    /sorting
        heap_sort.c
        merge_sort.c
        quick_sort.c
        strassen_matrix.c
    /dynamic_programming
        job_sequencing_deadlines.c
        knapsack_problem.c
        sum_of_subset.c
    /mathematical
        factorial.c
        factorial_recursive.c
        fibonacci.c
        multiply_matrices.c
    /backtracking
        traveling_salesman.c
    /general
        general_method.c
```

## How to Use

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/daa-algorithms.git
    ```

2. Navigate to the desired algorithm directory:

    ```bash
    cd daa-algorithms/algorithms/graph
    ```

3. Compile the algorithm:

    ```bash
    gcc bfs.c -o bfs
    ```

4. Run the algorithm:

    ```bash
    ./bfs
    ```

Replace `bfs.c` with the file you wish to compile and run.

## Contributing

Feel free to contribute to this repository by submitting pull requests or issues. If you have suggestions for additional algorithms or improvements, please let us know!

## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
