#include <iostream>
using namespace std;

int Moutainpeak(int arr[], int size) {
    int s = 0;

    // ❌ Tumne likha tha:
    // int e = arr.size() - 1;

    // ✅ Array ke sath size() nahi hota
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s < e) {

        if (arr[mid] < arr[mid + 1]) {

            // ✅ Sahi
            s = mid + 1;

            // ❌ Agar mid - 1 karoge to peak wali side hi chhod doge
        }
        else {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
}

int main() {

    int num[4] = {3, 4, 5, 1}; 

    int peakIndex = Moutainpeak(num, 4); 

    cout << "Mountain Peak Index : "
         << peakIndex << endl;  // o/ p peak index is 2

    cout << "Mountain Peak Element : "
         << num[peakIndex] << endl; // peak element  = 5

    return 0;
}