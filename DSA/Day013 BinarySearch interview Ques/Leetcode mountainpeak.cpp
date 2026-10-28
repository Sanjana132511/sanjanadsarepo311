class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e-s) / 2;
        
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s = mid + 1; // ye mid -1 one krne se galt ans deta h
            }
            else{
                e= mid;
            }
            mid = s + (e-s) /2;
        }
        return s;
        
    }
};

//852
// Example 1:

// Input: arr = [0,1,0]

// Output: 1

// Example 2:

// Input: arr = [0,2,1,0]

// Output: 1

// Example 3:

// Input: arr = [0,10,5,2]

// Output: 1

 

// Constraints:

// 3 <= arr.length <= 105
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array.

