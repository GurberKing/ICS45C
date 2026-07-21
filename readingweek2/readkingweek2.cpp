#include <iostream>
#include <string>
using namespace std;

void printValue(int& y) { // y는 수정 가능한 lvalue만 받을 수 있다.
    cout << y << '\n';
}
int main() {
    int x { 5 };
    printValue(x); // 정상: x는 수정 가능한 lvalue
    
    const int z { 5 };
    printValue(z); // 오류: z는 수정할 수 없는 lvalue

    printValue(5); // 오류:5는 rvalue
    return 0;
}