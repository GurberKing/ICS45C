#include <iostream>
#include <string>
using namespace std;
bool isVowel(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

void testVowel() {
    cout << "a: " << isVowel('a') << endl;
    cout << "b: " << isVowel('b') << endl;
}

int main() {
    return 0;
}