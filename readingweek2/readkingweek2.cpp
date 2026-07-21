#include <iostream>
#include <string>
using namespace std;
int main() {
    int x { 5 };
    int& ref { x };
    
    const int y {5};
    int& invalidRef { y }; // 비상수 Lvalue 참조는 수정할 수 없는 Lvalue에 바인딩 불가

    int& invalidRef2 { 0 }; // 비상수 Lvalue 참조는 rvalue에 바인딩 불가
    return 0;
}