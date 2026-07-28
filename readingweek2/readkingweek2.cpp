#include <iostream>
#include <string>
using namespace std;
struct Date {
    int year {};
    int month {};
    int day {};
};

int main() {
    const Date today { 2020, 10, 14 }; // const 클래스 타입 객체
    return 0;
}