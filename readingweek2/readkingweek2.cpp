#include <iostream>
#include <string>
using namespace std;

void printValue(std::string& y) { // 자료형이 string&  참조로 변환.
    cout << y << '\n';
} // 여기서 y 소멸
int main() {
    string x { "Hello World!" }; // x 는 std::string 이다.
    printValue(x); // x 가 참조 배개변수 y로 참조 전달. 비용이 적음.
    return 0;
}