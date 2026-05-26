#include <iostream>
#include <string>
using namespace std;
int main() {
    int num1 {};
    int den1 {};

    int num2 {};
    int den2 {};

    char ignore {};

    cout << "Enter a 1 fraction: ";
    cin >> num1 >> ignore >> den1;

    cout << "Enter a 2 fraction: ";
    cin >> num2 >> ignore >> den2;

    cout << "The two fractions multiplied: "
    << num1 * num2 << '/' << den1 * den2 << '\n';
    return 0;
}