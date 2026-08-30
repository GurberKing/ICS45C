#include <iostream>
#include <string>
using namespace std;

int main() {
    int x {};
    const int* ptr = &x;

    cout << ptr << ' ' << ptr + 1 << ' ' << ptr + 2 << '\n';
    return 0;
}