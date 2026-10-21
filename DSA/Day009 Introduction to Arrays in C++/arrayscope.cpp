#include<iostream>
using namespace std;
void update(int arr [], int n){
    cout << "inside function" << endl;
    //update array first element
    arr[0] = 120;
    //print array
    for(int i = 0; i<3; i++){
        cout << arr[i]<< " "<< endl; //120 2,3 inside colum

    }
    cout << " going main function " <<endl; // main

}
int main(){
    int arr[3] = {1,2,3};
    update(arr,3);
    //print array
    cout << endl << "printing main function" << endl; 
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";

    }
    cout << endl;// print main 120 , 2, 3  row
    return 0;
}