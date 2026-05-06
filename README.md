# 🔀 Wiggle Sort Algorithm

A C implementation of the **Wiggle Sort** algorithm with two approaches: **iterative (non-recursive)** and **recursive**.

---

## 📌 What is Wiggle Sort?

Wiggle Sort rearranges an array so that elements follow a **zigzag pattern**:

```
arr[0] ≤ arr[1] ≥ arr[2] ≤ arr[3] ≥ arr[4] ...
```

In other words:
- Elements at **even indices** should be **less than or equal** to their neighbors.
- Elements at **odd indices** should be **greater than or equal** to their neighbors.

### Example

| Input  | Output (Wiggle Sorted) |
|--------|------------------------|
| `3 5 2 1 6 4` | `3 5 1 6 2 4` |

---

## 📁 Project Structure

```
Wiggle Sort_Algo/
├── Implementation/
│   ├── Non_Recursion_wiggle_sort/
│   │   └── main.c          # Iterative approach
│   └── Recursion_wiggle_sort/
│       └── main.c          # Recursive approach
└── Wiggle Sort.pdf         # Algorithm documentation
```

---

## ⚙️ How It Works

### Iterative Approach
Loops through the array once. At each step, it checks whether the current pair satisfies the wiggle condition — if not, it swaps them.

- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)

### Recursive Approach
Same logic as the iterative version but uses recursion to move through the array index by index, with a base case when the end of the array is reached.

- **Time Complexity:** O(n)  
- **Space Complexity:** O(n) — due to the call stack

---

## 🚀 Getting Started

### Prerequisites
- GCC compiler (or any C compiler)
- Code::Blocks IDE *(optional, `.cbp` project files included)*

### Compile & Run

**Iterative version:**
```bash
gcc -o wiggle_iter "Implementation/Non_Recursion _wiggle_sort/main.c"
./wiggle_iter
```

**Recursive version:**
```bash
gcc -o wiggle_rec "Implementation/Recursion_wiggle_sort/main.c"
./wiggle_rec
```

### Usage
After running, the program will prompt you to enter 6 integers, then print the wiggle-sorted result:

```
Enter the numbers to wiggle sort them
3 5 2 1 6 4
Array after wiggle sort is:
3 5 1 6 2 4
```

---

## 🧠 Algorithm Logic

```c
void wiggleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Even index → should be smaller
        if (i % 2 == 0 && arr[i] > arr[i+1])
            swap(&arr[i], &arr[i+1]);
        // Odd index → should be larger
        if (i % 2 != 0 && arr[i] < arr[i+1])
            swap(&arr[i], &arr[i+1]);
    }
}
```

---

## 📄 License

This project is open source and available for educational purposes.
