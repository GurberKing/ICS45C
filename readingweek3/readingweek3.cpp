#include <iostream>
#include <string>
using namespace std;

const int& returnByConstReference() {
    return 5;
}

int main() {
    const int& ref = returnByConstReference();
    cout << ref;
    return 0;
}