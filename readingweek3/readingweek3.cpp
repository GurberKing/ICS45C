#include <iostream>
#include <string>
#include <iterator>
#include <cstring>
using namespace std;

int main() {
    char str[255]{ "string" };
    cout << "length: " << strlen(str) << '\n';

    char *ptr { str };
    cout << "length: " << strlen(ptr) << '\n';
    return 0;
}