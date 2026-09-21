#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main() {
    char str[255]{ "string" };
    cout << "length: " << size(str) << '\n';

    char *ptr { str };
    cout << "length: " << size(ptr) << '\n';
    return 0;
}