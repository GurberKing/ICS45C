#include <iostream>
#include <string>
using namespace std;
class Something {
private:
    int m_x{};

public:
    Something() { // 생성자는 반드시 non-const
        m_x = 5; // non-const 생성자에서는 멤버 수정 가능.
    }

    int getX() const { return m_x; } // const 멤버 함수
};

int main() {
    const Something s{}; // const 객체이며 non-const 생성자를 암시적으로 호출

    cout << s.getX(); // 5 출력.

    return 0;
}