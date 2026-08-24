#include <iostream>
#include <string>
using namespace std;

class Foo {
private: 
    int m_x{};
    int m_y{};

public:
    Foo() = default;

    Foo(int x, int y)
    :m_x{ x }
    ,m_y{ y }
    {
        cout << "Foo(" << m_x << ", " << m_y << ") constructed";
    }
};

int main() {
    Foo foo{};
    Foo foo1(2, 3);
    return 0;
}