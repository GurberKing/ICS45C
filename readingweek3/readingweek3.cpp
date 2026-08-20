#include <iostream>
#include <string>
using namespace std;

const int& returnByConstReference(const int& ref) {
    return ref;
}

int main() {
    // 직접참조
    const int& ref1 = 5;
    cout << ref1 << '\n';

    // 간접참조
    const int& ref2 = returnByConstReference(5);
    cout << ref2 << '\n';
    return 0;
}