#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year {};
    int month {};
    int day {};

    void print() {
        cout << year << '/' << month << '/' << day;
    }
};

int main() 
{
    const Date today { 2020, 10, 14 };
    today.print(); // 오류: non-const 멤버 함수 호출 불가.
    return 0;
}