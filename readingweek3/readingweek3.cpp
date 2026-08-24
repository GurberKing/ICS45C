#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main() {
    const int prime[] { 2, 3, 5, 7, 11 };
    cout << sizeof(prime) << '\n';
    cout << size(prime) << '\n';
    cout << ssize(prime);
    return 0;
}