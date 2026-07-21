#include <iostream>
#include <string>
using namespace std;
int main() {
    int x { 5 };
    int& ref { x };
    cout << x << ref << endl;

    x = 6 ;
    cout << x << ref << endl;
    
    ref = 7;
    cout << x << ref << endl;
    return 0;
}