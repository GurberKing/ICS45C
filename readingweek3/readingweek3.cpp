#include <iostream>
#include <string>
using namespace std;

void printElementZero(int arr[]) {    // arr에 최소 3개의 원소가 있다는것을 어떻게 보장?
    cout << arr[2];
}
int main() {
    int a[] { 3, 2, 1 };
    printElementZero(a); // 정상

    int b[] { 7, 6 };
    printElementZero(b); // 정의되지 않은 동작 발생

    int c[] { 9 };
    printElementZero(c); // 정의되지 않은 동작 발생
    return 0;
}