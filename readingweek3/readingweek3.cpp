#include <iostream>
#include <string>
using namespace std;
void printCStringBackwards(const char str[]) {
    const char* ptr = str;

    while (*ptr != '\0') {
        ptr++;
    }

    while (ptr != str) {
        --ptr;
        cout << *ptr;
    }
}

int main() {
    char name[] { "Hello, World!" };
    printCStringBackwards(name);
    return 0;
}