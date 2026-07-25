#include <iostream>
#include <string>
using namespace std;

namespace Foo {
    void printHi() { cout << "Hi!\n"; }
};

int main() {
    Foo::printHi(); // 객체가 필요하지 않음.
    return 0;
}