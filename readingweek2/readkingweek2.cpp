#include <iostream>
#include <string>
using namespace std;

void printAddress(int val, int& ref) { // 자료형이 string&  참조로 변환.
    cout << "The address of the value parameter: " << &val << '\n';
    cout << "The address of the reference parameter is: " << &ref << '\n';
} // 여기서 y 소멸
int main() {
    int x { 5 };
    cout << "The address of x: " << &x << '\n';
    printAddress(x, x);
    return 0;
}