# 🛠️ Insertion Sort Algorithm

## 📌 Introduction

**Insertion Sort** is a simple and intuitive sorting algorithm. It works just like sorting playing cards in your hand: you take one card at a time and place it in its correct position in an already sorted portion of cards.

It's a stable, in-place sorting algorithm, perfect for small datasets or nearly sorted lists.

---

## 🔍 How It Works

1️⃣ Start from the **second element** (index `1`) and assume the first element is already sorted.\
2️⃣ Pick the **key** (current element) and compare it with elements before it.\
3️⃣ **Shift elements** to the right if they are greater than the key.\
4️⃣ Insert the **key** at its correct position.\
5️⃣ Repeat the process for all elements until the array is sorted. 🎉

---

## 📝 Pseudo Code

```plaintext
INSERTION-SORT(A):
  for i ← 1 to length(A) - 1:
    key ← A[i]
    j ← i - 1
    while j ≥ 0 and A[j] > key:
      A[j + 1] ← A[j]   // Shift element right
      j ← j - 1
    A[j + 1] ← key      // Insert the key at correct position
```

---

## 💻 C++ Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Original array: ";
    printArray(arr);

    insertionSort(arr, arr.size());

    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}
```

---

## 📊 Complexity Analysis

| Case                              | Time Complexity | Explanation                                                   |
| --------------------------------- | --------------- | ------------------------------------------------------------- |
| **Best Case** _(Already Sorted)_  | **O(n)**        | Only one comparison per element (no shifting required).       |
| **Worst Case** _(Reverse Sorted)_ | **O(n²)**       | Each element is compared and shifted in each iteration.       |
| **Average Case**                  | **O(n²)**       | On average, elements are compared and shifted multiple times. |

### **Step-by-Step Complexity Calculation**

- **Best Case:** Inner loop runs only once per iteration ⇒ **n iterations**.
- **Worst/Average Case:** Inner loop runs up to **n times per iteration**, leading to a summation:  
  \(T(n) = 1 + 2 + 3 + ... + (n-1) = \frac{(n-1)n}{2} = O(n²)\).

---

## 📦 Space Complexity

- **O(1):** In-place sorting using a constant amount of extra space.
- **Stable Algorithm:** Maintains the relative order of equal elements.

---

## 🎯 Example Walkthrough

**Input:** `[12, 11, 13, 5, 6]`

### **Step-by-Step Execution**

1️⃣ **Pick `11`** → Compare with `12`, shift `12` → Insert `11`.  
 **Array:** `[11, 12, 13, 5, 6]`

2️⃣ **Pick `13`** → Already in the correct position.  
 **Array:** `[11, 12, 13, 5, 6]`

3️⃣ **Pick `5`** → Compare and shift `13, 12, 11` → Insert `5` at the start.  
 **Array:** `[5, 11, 12, 13, 6]`

4️⃣ **Pick `6`** → Compare and shift `13, 12, 11` → Insert `6` after `5`.  
 **Array:** `[5, 6, 11, 12, 13]`

✅ **Final Sorted Array:** `[5, 6, 11, 12, 13]`

---

## ✅ Advantages

✔️ **Simple and easy to implement**.  
✔️ **Stable sorting algorithm** (preserves the order of duplicate elements).  
✔️ **Efficient for small or nearly sorted datasets** _(Best case O(n))_.

---

## ❌ Disadvantages

❌ **Inefficient for large datasets** _(O(n²))_.  
❌ **Slower compared to advanced algorithms** like Merge Sort or Quick Sort.

---

## 🚀 Conclusion

**Insertion Sort** is best suited for small or nearly sorted datasets due to its simplicity and efficiency in such scenarios. For larger datasets, consider using more efficient algorithms like **Merge Sort** or **Quick Sort**.
