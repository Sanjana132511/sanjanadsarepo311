# Day10 Notes

Day10 Notes

Sort
Arrays ko ascending/non-decreasing order me arrange karna.
Efficient searching aur two-pointer techniques ke liye useful.

Pair Sum
Array me aise pair find karna jinka sum given target ke equal ho.
Brute Force: O(n²)
Optimized: Two Pointers (sorted array).

Array Intersection
Common elements find karna.
Brute Force: Nested loops, O(n × m).
Optimized: Two Pointers on sorted arrays, O(n + m).

Find Duplicates
Array me repeated element find karna.

Common methods:

Sorting
XOR (special cases)
Hash Map

Find Unique
Array me sirf ek baar aane wala element find karna.
XOR method efficient hai.
Time: O(n), Space: O(1).

Swap Alternate
Adjacent alternate elements swap karna.
[1,2,3,4,5,6]
↓
[2,1,4,3,6,5]

Traverse with step size 2.
Time: O(n)
Space: O(1) ✅

#include<iostream>
// #include<vector>
// using namespace std;
// int arrayInstersection(vector <int> &arr1,int n vector<int>){
//     vector<int>ans;
//     for(int i = 0; i<n; i++){
//         int element = arr1[i];
//         for(int j = 0 ; j<m; j++)
//           {
//             if(element<arr2[j])
//              break;
//             if(element == arr2[j]){
//                 ans.push_back(element);
//                 arr2[j] = -2;
//                 break;
//             }
//         }
//     }return ans;
// }
 ye appororach wrong non decreasing order ni h or isme  high completity or optimize ni h intersection find 

