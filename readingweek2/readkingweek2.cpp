#include <iostream>
#include <string>
using namespace std::literals; // s와 sv 접미사 접근위해

#include <string_view>
int main() {
    auto d { 5.0 };
    auto i { 1 + 2 };
    auto x { i };
    auto a { 1.23f };
    auto b { 5u };

    int c { 5 };
    const auto b { 5 };
    constexpr auto c { 5 }; // const 처럼 변경 불가 + 컴파일 시 바로 계산되게끔. 즉 숫자 상수, 배열크기, 수학공식처럼 컴파일전에 미리 알 수 있는값들.
    auto s1 { "goo"s };
    auto s2 { "moo"sv };
    return 0;
}