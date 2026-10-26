
#include <iostream>
#include <vector>
using namespace std;

int findUnique(int *arr, int size) {
    int ans = 0;

    for(int i = 0; i < size; i++) {
        ans = ans^arr[i]; //xor 
    }

    return ans;
}

int main() {
    vector<int> arr = {1,4,6,1,6}; // uniquw 4 baki reapeat h

    cout << findUnique(arr.data(), arr.size());

    return 0;
}

