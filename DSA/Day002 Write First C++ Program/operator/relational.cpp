// ii - realtional a==b,a<b,a>b,a>=b,a<=b,a!=b
#include <iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 3;
    bool f1 = (a==b);
    cout << f1 << endl;
    bool f2 = (a>b);
    cout << f2 << endl;
    bool f3 = (a<b);
    cout << f3 << endl;
    bool f4 = (a<=b);
    cout << f4 << endl;
    bool f5 = (a>=b);
    cout << f5 << endl;
    bool f6 = (a!=b);
    cout << f6 << endl;
}
//output : 0, 0, 1, 1, 0, 1