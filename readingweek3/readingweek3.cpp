#include <iostream>
#include <string>
using namespace std;
int main() {
    // string 은 값전달 안하는게 좋다. pass by value 시 큰 문자열 복사가 일어남.
    // std::string_view 가 효율 측면에서 더 낫다.
}