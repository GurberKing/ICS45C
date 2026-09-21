#include <iostream>
#include <string>
using namespace std;

void print(char ptr[]) {
    cout << ptr << '\n';
}

int main() {
    char str[]{ "string" };
    cout << str << '\n';

    print(str);
    return 0;
}