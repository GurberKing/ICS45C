#include <iostream>
#include <string>
using namespace std;

void printElementZero(const int arr[]) {    // const int* 과 동일하게 처리됨.
    cout << arr[0];
}
int main() {
    const int prime[] { 2, 3, 5, 7, 11 };
    const int squares[] { 1, 4, 9, 16, 25, 36, 49, 64, 81 };
    printElementZero(prime);    // prime은 포인터로 붕괴.
    printElementZero(squares);  // sxquares는 포인터로 붕괴.
    return 0;
}