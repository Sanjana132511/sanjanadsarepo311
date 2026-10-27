#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (end-start)/2;

    while(start <= end){
        if (arr[mid] == key){
            return mid;
        }
        //go to right side
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
             //key < arr[mid]
            end = mid-1;
        }
        mid = start + (end -start)/2;
        }
    
   return -1;
    }

int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};
    int evenindex = BinarySearch (even ,6,6); 
    cout << "index of 6  is " << evenindex << endl;// o/p  2
    int oddindex = BinarySearch (odd ,5,9);
    cout << "index of 9  is " << oddindex << endl;// o/p   4
    

    return 0;

}

