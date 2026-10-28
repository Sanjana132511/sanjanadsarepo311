# Day13 Notes

# Day 13 Notes

## 1. Find First and Last Occurrence of an Element in a Sorted Array

### Problem
Given a sorted array, find the first and last occurrence of a target element using Binary Search.

### Example

Input:

```cpp
arr = {1, 2, 3, 3, 3, 5}
key = 3
```

Output:

```cpp
First Occurrence = 2
Last Occurrence  = 4
```

### Logic

#### First Occurrence

```cpp
if(arr[mid] == key){
    ans = mid;
    e = mid - 1;
}
```

Move left to find an earlier occurrence.

#### Last Occurrence

```cpp
if(arr[mid] == key){
    ans = mid;
    s = mid + 1;
}
```

Move right to find a later occurrence.

### Time Complexity

```cpp
O(log n)
```

### Key Difference

```cpp
First Occurrence -> e = mid - 1
Last Occurrence  -> s = mid + 1
```

---

## 2. Peak Element in Mountain Array

### Problem

A Mountain Array first increases and then decreases.

Find the index of the peak element.

### Example

```cpp
arr = {3, 4, 5, 1}
```

Output:

```cpp
Peak Index = 2
Peak Element = 5
```

### Binary Search Logic

```cpp
if(arr[mid] < arr[mid + 1]){
    s = mid + 1;
}
else{
    e = mid;
}
```

### Explanation

#### Case 1

```cpp
arr[mid] < arr[mid+1]
```

Example:

```cpp
4 < 5
```

We are on the increasing slope.

Peak lies on the right side.

```cpp
s = mid + 1;
```

#### Case 2

```cpp
arr[mid] > arr[mid+1]
```

Example:

```cpp
5 > 1
```

We are on the decreasing slope.

Peak lies at mid or on the left side.

```cpp
e = mid;
```

### Important Note

❌ Wrong

```cpp
s = mid - 1;
```

✅ Correct

```cpp
s = mid + 1;
```

Using `mid - 1` may skip the peak and give the wrong answer.

### Time Complexity

```cpp
O(log n)
```

### Complete Formula

```cpp
if(arr[mid] < arr[mid + 1])
    s = mid + 1;
else
    e = mid;
```

### Key Points

- Mountain Array = Increasing + Decreasing
- Peak element is the largest element.
- Binary Search is used.
- Return `s` or `e` as Peak Index.
- Peak Element = `arr[s]`

---

## Day 13 Summary

✅ First Occurrence using Binary Search

✅ Last Occurrence using Binary Search

✅ Pair Return (`first`, `last`)

✅ Mountain Peak Element

✅ Binary Search on Increasing/Decreasing Slope

✅ Time Complexity: `O(log n)`