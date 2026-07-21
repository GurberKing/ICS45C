#include <iostream>
#include <string>
using namespace std;

void printValue(std::string y) {
    cout << y << '\n';
} // 여기서 y 소멸
int main() {
    string x { "Hello World!" }; // x 는 std::string 이다.
    printValue(x); // x 가 값으로 전달되어 y로 복사된다. 비용 큼.
    return 0;
}