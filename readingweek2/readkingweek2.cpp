#include <iostream>
#include <string>
#include "add.h"
using namespace std;

const double gravity { 9.8 }; // 상수변수 Const Variable
int const sidesInSquare { 4}; // east const style

int main() {
    cout << "gravity: " << gravity << '\n';
    cout << "SidesInSquare: " << sidesInSquare << '\n';
    return 0;
}