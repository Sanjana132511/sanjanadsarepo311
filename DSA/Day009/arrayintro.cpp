//array introduction
#include<iostream>
using namespace std;
//hold
void printArray(int arr[], int size) {

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing DONE " << endl; //  printing the array 
// 1 0 0 0 0 0 0 0 0 0  printing 
}
int main(){
    //declare

    int num[15]; 
    
    // //acessing array
    
    cout << "value of 14 index " << num[14] << endl;//value of 14 index 4201115
    
    cout << "value of 20 index " << num[20] << endl; // value of 20 index 6422288
    
    int second[3] ={5,6,8};
    
    cout << "value of 2 index " << second[2] << endl; //value of 2 index 8
    
    int third[2] = {2,7};
    //print array
    int n = 15;
        printArray(third, 15); // function call h 

    int thirdSize = sizeof(third) / sizeof(int);
    
    cout << " size of third is " << thirdSize << endl;  // size of third is 2

    for(int i = 0; i < n ; i ++){
    
        cout << third[i] << " " << endl; // print array 2
    
    }

    int fourth[10] = {1};
    
    n = 10;
      printArray(fourth, 10);

    //initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};

    n = 10;
    //printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    
    cout<<" Size of Fifth is " << fifthSize <<endl; //  Size of Fifth is 10
    
    char ch[5] = {'a','s','d','f','g'};
    
    cout << "the value 3 index :"<< ch[3] << endl; //the value 3 index :f
    // //print the array
      for(int i = 0; i < 5 ; i ++){ // print value of 5 charcter a,s,d,f,g
    
        cout << ch[i] << " " << endl; 
    
    }
  
    cout<< " printing DONE " << endl;
    
    double firstDouble[5] = {0};   // सारे elements 0
    
    float firstfloat[6] = {0};     // सारे elements 0
    
    bool firstBool[9] = {false};   // सारे elements false

    cout << "Double[4] = " << firstDouble[4] << endl; //0
    cout << "Float[5] = " << firstfloat[5] << endl;//0
    cout << "Bool[8] = " << firstBool[8] << endl;//0
 
   


    cout << endl << " Everything is Fine " << endl << endl;

  
}
