#include <iostream>
#include <string>
using namespace std;

int main() {
    int array[5] {};
    cout << sizeof(array) / sizeof(array[0]);
    return 0;
}