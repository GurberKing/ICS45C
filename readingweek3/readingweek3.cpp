#include <iostream>
#include <string>
using namespace std;

const string& firstAlphabetical(const string& a, const string& b) {
    return (a < b) ? a : b;
}

int main() {
    string hello = "Hello";
    string world = "World";

    cout << firstAlphabetical(hello, world);
    return 0;
}