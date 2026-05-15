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

int main() {
    cout << "a: " << isVowel('a') << endl;
    cout << "b: " << isVowel('b') << endl;
    return 0;
}