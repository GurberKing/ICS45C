#include <iostream>
#include <string>
using namespace std;
class Foo {
private:
    int m_x { 0 };
    int m_y { 1 };

public:
    Foo(int x, int y)
        : m_x { x }
        {
            m_x = x; // 잘못된 방식: 초기화가 아니라 대입함.
            m_y = y; // 잘못된 방식: 초기화가 아니라 대입함.
        }

    void print() const {
        cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
};

int main() {
    Foo foo(6, 7);
    foo.print();

    return 0;
}