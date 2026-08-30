#include <iostream>
#include <string>
using namespace std;

void printElementZero(const int* arr) {
    cout << arr[0];
}
int main() {
    const int prime[] { 2, 3, 5, 7, 11 };
    const int squares[] { 1, 4, 9, 16, 25, 36, 49, 64, 81 };
    printElementZero(prime);
    printElementZero(squares);
    return 0;
}