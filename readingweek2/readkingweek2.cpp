#include <iostream>
#include <string>
using namespace std;

int main() {
    int x {5};
    int y {5};
    cout << x << ' ' << y << '\n';
    cout << ++x << ' ' << --y << '\n';
    cout << x << ' ' << y << '\n';
    cout << x++ << ' ' << y-- << '\n';
    cout << x << ' ' << y << '\n';
}