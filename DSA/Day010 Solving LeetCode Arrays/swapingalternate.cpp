#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i = 0 ; i<n; i++){
        cout << arr[i] << " ";

    }cout << endl;
}
void swapAlternate(int arr[], int size){
    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
          swap (arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[6] = {5,6,7,8,10,2}; // o/p: 6 5 8 7 2 10
    int odd[5]={1,5,11,15,13}; // o/p : 5 1 15 11 13
    swapAlternate(even,6);
    printArray(even,6);
    cout <<endl;
    swapAlternate(odd,5);
    printArray(odd,5);

    return 0;



}

