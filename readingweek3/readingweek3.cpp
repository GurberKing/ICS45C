#include <iostream>
#include <string>
using namespace std;

const string& foo(const string& s) {
    return s;
}

string getHello() {
    return "Hello";
}

int main() {
    const string s = foo(getHello());
    cout << s;
    return 0;
}