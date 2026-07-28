#include <iostream>
#include <string>
using namespace std;
struct Date {
    int year {};
    int month {};
    int day {};

    void incrementDay() {
        ++day;
    }
};

int main() {
    const Date today { 2020, 10, 14 }; // const 클래스 타입 객체

    today.day += 1; // 오류: const 객체의 멤버 수정 불가.
    today.incrementDay(); // 오류: 객체를 수정하는 멤버 함수 호출 불가.

    return 0;
}