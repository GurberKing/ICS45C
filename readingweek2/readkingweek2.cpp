#include <iostream>
#include <string>
using namespace std;

int g_x { 5 };
int main() {
    constexpr int& ref1 { g_x }; // 가능: 전역변수에 바인딩

    static int s_x { 6 };
    constexpr int& ref2 { s_x }; // 가능: 정적 지역 변수에 바인딩

    int x { 6 };
    constexpr int& ref3 { x }; // 오류: 정적 저장 기간을 갖지 않는 객체에는 바인딩 불가.

    return 0;
}