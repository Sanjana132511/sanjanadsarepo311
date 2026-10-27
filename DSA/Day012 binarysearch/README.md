# Day12 Notes
Binary Search

Binary Search is an efficient searching algorithm used on a sorted array.

Conditions
Array must be sorted.
Time Complexity: O(log n)
Space Complexity: O(1)
Logic
Find middle element.
If key == middle element → return index.
If key > middle element → search right half.
If key < middle element → search left half.
Repeat until key is found or search space becomes empty.
