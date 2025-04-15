# Peak and Valley Finder

## Overview
This program implements a recursive function `PV` to find the peak or valley in a sequence of `MyObj` objects. The function is designed to handle four specific cases:
1. A strictly decreasing sequence.
2. A strictly increasing sequence.
3. A sequence that increases to a peak and then decreases.
4. A sequence that decreases to a valley and then increases.

The program uses binary search logic to efficiently find the peak or valley, minimizing the number of comparisons.

---

## Files Included
- **`PV.cpp`**: Contains the implementation of the `PV` function.
- **`MyObj.cpp` and `MyObj.h`**: Define the `MyObj` class and its comparison operators.
- **`Prog3_Test.cpp`**: A test program that generates a sequence of `MyObj` objects, calls the `PV` function, and prints the result.
- **`README.md`**: This file, which explains the program and how to use it.

---

## How It Works
The `PV` function works as follows:
1. **Base Case**: If the range `[s..t]` has only one element (`s >= t`), the function returns `s`.
2. **Peak Check**: The middle element `m` is checked to see if it is greater than its neighbors. If so, `m` is returned as the peak.
3. **Valley Check**: The middle element `m` is checked to see if it is smaller than its neighbors. If so, `m` is returned as the valley.
4. **Recursive Search**:
   - If the sequence is increasing at `m`, the function searches the right half (`m+1` to `t`).
   - If the sequence is decreasing at `m`, the function searches the left half (`s` to `m-1`).

---

## How to Compile and Run
1. **Compile the Program**:
   Use the following command to compile the program:
   ```bash
   g++ -o prog3_test Prog3_Test.cpp MyObj.cpp PV.cpp

2. Run the Program: Execute the compiled program:
    ./prog3_test

3. Output:
    - The program will print the sequence of MyObj objects.
    - It will then print the index of the peak or valley found by   the PV function.

---

Example Output

For a sequence like:
    (1 2 3)(2 3 4)(3 4 5)(4 5 6)(5 6 7)(6 7 8)(4 8 9)(3 7 8)(2 6 7)(1 5 6)

The program will output:
    5

This indicates that the peak is at index 5.

---

Notes
    - The program uses binary search logic, making it efficient with a time complexity of O(log n).
    - The test program generates a sequence that first increases and then decreases, ensuring the PV function is tested for a peak.   