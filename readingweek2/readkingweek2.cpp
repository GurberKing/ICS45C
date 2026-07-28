#include <iostream>
#include <string>
using namespace std;
class Date { // class 멤버는 기본적으로 비공개 private, 다른멤버만 접근 가능.
    int m_year {}; // 기본적으로 비공개
    int m_month {}; // 기본적으로 비공개
    int m_day {}; // 기본적으로 비공개

    void print() const { // 기본적으로 비공개
        cout << m_year << '/' << m_month << '/' << m_day;
    }
};

int main() {
    Date today { 2020, 10, 14 }; // 오류: 더 이상 집합체 초기화 사용불가.

    // 일반 외부 코드에서는 비공개 멤버에 접근 불가.
    today.m_day += 1; // 오류: m_day 멤버는 비공개.
    today.print(); // 오류: print() 멤버 함수는 비공개.

    return 0;
}