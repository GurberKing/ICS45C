#include <iostream>
#include <string>
using namespace std;

class Foo {
private: 
    int m_x{};
    int m_y{};

    // 선언된 생성자가 없음.
};

int main() {
    Foo foo{};
    return 0;
}