#include <iostream>
#include <string>
using namespace std;

struct IntPair {
    int num1 {};
    int num2 {};

    void print() { cout << "THe first number: " << num1 << '\n' << "The second number: " << num2 << '\n'; };
};

int main() {
    IntPair p1 {1, 2};
    IntPair p2 {2, 3};

    p1.print();
    p2.print();

    return 0;
}