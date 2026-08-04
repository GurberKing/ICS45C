#include <iostream>
#include <string>
using namespace std;
class Foo {
private:
    int m_x {};
    int m_y {};
public:
    Foo(int x, int y) {
        cout << "Foo(" << x << ", " << y << ") constructed\n";
    }

    void print() const {
        cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
};

int main() {
    Foo foo { 6, 7 }; // Foo(int, int) 생성자 호출.
    foo.print();
    return 0;
}