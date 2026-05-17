#include <iostream>
#include <string>
#include "add.h"
using namespace std;

const double gravity { 9.8 }; // 상수변수 Const Variable
int const sidesInSquare { 4}; // east const style

int main() {
    int age;
    cout << "gravity: " << gravity << '\n';
    cout << "SidesInSquare: " << sidesInSquare << '\n';
    cout << "Enter a age: ";
    cin >> age;
    const int constage {age};
    cout << "const age is: " << constage << '\n'; // const variable 은 비상수변수 non-constant age 로도 초기화가능
    return 0;
}