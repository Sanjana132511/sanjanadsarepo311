

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;   // Left me search karo
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;   // Right me search karo
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int even[5] = {1, 2, 3, 3,, 5};

    cout << "First occurrence of 3 index is at "
         << firstOcc(even, 5, 3) << endl; // op: 2

    cout << "Last occurrence of 3 index is at "
         << lastOcc(even, 5, 3) << endl; //op: 3

    return 0;
}