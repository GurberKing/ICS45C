#include <iostream>
#include <string>
using namespace std;

void foo(int a, int& b, const string& c) {
}
int main() {
    int x { 5 };
    string s { "Hello World!" };
    
    foo(5, x, s);
    return 0;
}