#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main() {
    char str[] {"string"};
    cout << str << '\n';

    str[1] = 'p';
    cout << str << '\n';
    return 0;
}