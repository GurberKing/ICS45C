#include <iostream>
#include <string>
using namespace std;
void printCString(const char str[]) {
    while (*str != '\0') {
        cout << *str;
        str++;
    }
}

int main() {
    char name[] { "Hello, World!" };
    printCString(name);
    return 0;
}