// iii-logical a&&b,a||b,a!=b &&, ||, !=) ka result true/false hota hai, aur ye bool type 
#include <iostream>
using namespace std;
int main (){
    int a = 23;
    int b = 3;
    bool first = (a&&b);
    cout << first << endl;
    bool second = (a||b);
    cout << second << endl;
    bool third = (a!=b);
    cout << third << endl; 
    
}
//output : 1, 1, 1