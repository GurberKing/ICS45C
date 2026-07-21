#include <iostream>
#include <string>
using namespace std;

void addOne(int y) { //y는 x의 복사본이다.
    ++y; // 실제 x가 아니라 x의 복사본을 변경한다.
}
int main() {
    int x { 5 };
    cout << "value: " << x << '\n';
    addOne(x);
    cout << "value: " << x << '\n'; // x는 변경되지 않음.
    return 0;
}