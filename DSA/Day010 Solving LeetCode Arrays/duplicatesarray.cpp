#include <iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr){
    int ans = 0;
    //xor ing all  element
    for(int i=0;  i<arr.size(); i++){
        ans= ans^arr[i];
    }
    // xor n , n-1
    for(int i=1; i<arr.size(); i++){
        ans= ans^i;
    }
    return ans;
}
int main() {
    vector<int> arr = {1, 3, 4, 2, 2};

    cout << findDuplicate(arr); // array duplicate 2

    return 0;
}