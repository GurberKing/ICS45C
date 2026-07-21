#include <iostream>
#include <string>
using namespace std;
int main() {
    const int x { 5 };
    const int& ref { x };
    cout << ref << endl;
}