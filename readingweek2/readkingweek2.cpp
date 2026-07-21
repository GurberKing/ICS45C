#include <iostream>
#include <string>
using namespace std;

void printRef(const int& y) { // y는 상수 참조 const reference
    cout << y << '\n';
}
int main() {
    int x { 5 };
    printRef(x); // 정상: x는 수정 가능한 lvalue
    
    const int z { 5 };
    printRef(z); // 가능: x는 수정 가능한 lvalue, y 는 z에 바인딩

    printRef(5); // 가능: 5는 rvalue, y 는 임시 int 객체에  바인딩.
    return 0;
}