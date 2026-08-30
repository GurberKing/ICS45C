#include <iostream>
#include <string>
using namespace std;

int main() {
    const int arr[] { 9, 7, 5, 3, 1 };
    const int* ptr = arr;
    cout << ptr[2];
    return 0;
}