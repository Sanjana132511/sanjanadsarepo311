
#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0; i<size; i++ ){
        if(arr[i] == key){
            return 1; // found
        }
    } 
    // arge ye bracket alg jgh lga diya code sirf 5 hi presnt diya ye baki sb abent
        return 0 ; //not found
    
} 
int main(){
    int arr[5] = {5,7,-2,10,22};
    cout << "enter element to search for "<< endl;
    int key;
    cin >> key;
    bool found = search(arr, 5, key);
    if(found){
        cout << "key is present" << endl;

    }
    else{
        cout << "key is absent" << endl;
    } 
    return 0; 
}
 

