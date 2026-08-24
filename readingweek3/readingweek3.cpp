#include <iostream>
#include <string>
using namespace std;

int& max(int& x, int& y) {
    return (x > y) ? x : y;
}

int main() {
    int a = 5;
    int b = 6; 
    max(a, b) = 7;
    cout << a << b << '\n';
    return 0;
}