# Bubble Sort Algorithm

## 📌 Introduction

**Bubble Sort** is one of the simplest sorting algorithms. It repeatedly compares adjacent elements in an array and swaps them if they are in the wrong order. This process is repeated until the entire array is sorted.

Bubble Sort is named for the way smaller elements "bubble" to the top (start of the array) with each pass.

---

## 🔍 How It Works

1. **Start from the beginning** of the array.
2. Compare adjacent elements:
   - If the current element is greater than the next, swap them.
   - Otherwise, leave them as is.
3. Repeat this process for all elements until the array is sorted.
4. In each pass, the largest unsorted element moves to its correct position at the end of the array.

---

## 📝 Pseudo Code

```plaintext
BUBBLE-SORT(A):
  for i from 0 to length(A) - 1:
    swapped ← false
    for j from 0 to length(A) - i - 2:
      if A[j] > A[j + 1]:
        swap A[j] and A[j + 1]
        swapped ← true
    if not swapped:
      break
```

---

## 💻 C++ Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void printArray(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: ";
    printArray(arr);

    bubbleSort(arr);

    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}
```

---

## 📊 Time Complexity Analysis

| Case                              | Complexity | Explanation                                                   |
| --------------------------------- | ---------- | ------------------------------------------------------------- |
| **Best Case** _(Already Sorted)_  | **O(n)**   | Only one pass is required, with no swaps (early termination). |
| **Worst Case** _(Reverse Sorted)_ | **O(n²)**  | Requires n passes with all elements being swapped each pass.  |
| **Average Case**                  | **O(n²)**  | Comparisons and swaps occur for nearly half the array.        |

### **Step-by-Step Complexity Calculation**

- **Outer Loop**: Runs for `n` passes.
- **Inner Loop**: Runs up to `n-i-1` times for each pass.

Total comparisons:

\[ T(n) = (n-1) + (n-2) + ... + 1 = \frac{n(n-1)}{2} = O(n^2) \]

---

## 📦 Space Complexity

- **O(1)**: Bubble Sort is an **in-place sorting algorithm**, requiring no extra space.
- **Stable Algorithm**: Relative order of equal elements is maintained.

---

## 🎯 Example Walkthrough

**Input:** `[64, 34, 25, 12, 22, 11, 90]`

### **Step-by-Step Execution**

1. **First Pass:** Compare and swap adjacent elements:

   - `[64, 34, 25, 12, 22, 11, 90]` → `[34, 25, 12, 22, 11, 64, 90]`
   - Largest element (`90`) moves to the last position.

2. **Second Pass:** Repeat for remaining elements:

   - `[34, 25, 12, 22, 11, 64]` → `[25, 12, 22, 11, 34, 64]`

3. Continue until sorted: `[11, 12, 22, 25, 34, 64, 90]`.

---

## ✅ Advantages

✔️ Simple and easy to implement.
✔️ Performs well on small datasets.
✔️ Detects already sorted arrays quickly (best case O(n)).
✔️ **Stable sorting algorithm** (preserves order of duplicate elements).

---

## ❌ Disadvantages

❌ **Inefficient for large datasets** (`O(n²)`).
❌ Often slower than other algorithms like Quick Sort and Merge Sort.
❌ Requires repeated passes even if most of the array is sorted.

---

## 🚀 Conclusion

Bubble Sort is a great starting point for learning sorting algorithms due to its simplicity and intuitive process. However, for larger datasets, consider using more efficient algorithms like **Merge Sort** or **Quick Sort**.

Hope this helps you master Bubble Sort! 💡
