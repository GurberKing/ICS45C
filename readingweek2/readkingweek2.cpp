#include <iostream>
#include <string>
using namespace std;
int main() {
    int x { 5 };
    int& ref { x };
    cout << x << endl;
    cout << ref << endl;

    return 0;
}