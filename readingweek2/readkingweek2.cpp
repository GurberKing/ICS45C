#include <iostream>
#include <string>
using namespace std;
class Foo { // 클래스는 기본적으로 private -> 집합체는 비공개멤버를 가질 수 없다.
    int m_x {};
    int m_y {};
};

int main() {
    Foo foo { 6, 7 }; //오류
    return 0;
}