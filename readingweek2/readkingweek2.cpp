#include <iostream>
#include <string>
using namespace std;
class Foo {
public:
    Foo(int x, int y) {
    }
};

int main() {
    Foo foo{ 'a', true }; // Foo(int, int) 생성자와 일치한다.

    return 0;
}