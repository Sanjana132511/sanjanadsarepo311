// progm-2 data type
#include <iostream>
using namespace std;
int main(){
    int a=123;
    cout << a << endl;
    char b = 'v';
    // char ch = 'v' //invalid  error: expected ',' or ';' before 'cout
    cout << b << endl;
    float f = 1.2;
    cout << f << endl;
    double d = 1.83;
    cout << d << endl;
    bool bl = 0;
    cout << bl << endl; 
    // int size = sizeof (a);
    // cout << "size of a" << a <<endl; // invalid error 'size' cannot be used as a function
    // cout << "size of a" << size <<endl;
    int sizeb = sizeof (b);
    cout << "size of b" << sizeb <<endl;
    
    int sized = sizeof (d);
    cout << "size of d" << sized <<endl;
    int sizebl = sizeof (bl);
    cout << "size of bl" << sizebl <<endl;
     int sizef = sizeof (f);
    cout << "size of f" << sizef <<endl;
}
