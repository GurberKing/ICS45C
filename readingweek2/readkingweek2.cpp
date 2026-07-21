#include <iostream>
#include <string>
using namespace std;

void addOne(int& y) { //y는 실제 객체 x에 바인딩 된다.
    ++y; // 실제 x를 변경
}
int main() {
    int x { 5 };
    cout << "value: " << x << '\n';
    addOne(x);
    cout << "value: " << x << '\n'; // x는 6으로 변경.
    return 0;
}