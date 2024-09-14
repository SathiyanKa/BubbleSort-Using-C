# Bubble Sort Algorithm in C

This repository contains an implementation of the Bubble Sort algorithm in the C programming language.

## Table of Contents
- [Introduction](#introduction)
- [How Bubble Sort Works](#how-bubble-sort-works)
- [Program Structure](#program-structure)
- [How to Compile and Run](#how-to-compile-and-run)
- [Example Output](#example-output)
- [Complexity Analysis](#complexity-analysis)
- [Contributing](#contributing)
- [License](#license)

## Introduction
Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## How Bubble Sort Works
1. Iterate through the array and compare each element with its adjacent element.
2. If the current element is greater than the next element, swap them.
3. Continue this process until the array is sorted.
4. If no swaps occur in a pass, the array is already sorted, and the algorithm can terminate early.

## Program Structure
The implementation consists of the following files:
- `main.c`: The main file that contains the implementation of the bubble sort algorithm and code to test it.
- `bubbleSort.cbp`: Code::Blocks project file for the Bubble Sort algorithm.
- `bin/Debug/bubbleSort.exe`: Compiled executable file (for reference).

## How to Compile and Run

### Prerequisites
To compile and run the program, you need:
- A C compiler (e.g., GCC)
- A terminal or command-line interface

### Steps
1. Clone this repository:
    ```bash
    git clone https://github.com/yourusername/bubbleSort.git
    cd bubbleSort
    ```

2. Compile the program:
    ```bash
    gcc main.c -o bubbleSort
    ```

3. Run the compiled program:
    ```bash
    ./bubbleSort
    ```

## Example Output
Enter Array Size: 5  
Enter Elements: 64 25 12 22 11  
Sorted array: 11 12 22 25 64

## Complexity Analysis
- **Time Complexity**:
  - Best case: O(n) (when the array is already sorted)
  - Average case: O(n²)
  - Worst case: O(n²)
  
  While bubble sort is inefficient on large datasets due to its quadratic time complexity, it is easy to implement and understand.

- **Space Complexity**: O(1), as it is an in-place sorting algorithm and only requires a constant amount of extra memory.

## Contributing
Contributions are welcome! Feel free to fork the repository and submit a pull request with improvements or bug fixes.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
