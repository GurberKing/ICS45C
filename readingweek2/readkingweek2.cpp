#include <iostream>
#include <string>
using namespace std;
class Date {
private:
    int m_year{};
    int m_month{};
    int m_day{};

public:
    Date(int year, int month, int day); // 생성자 선언
    
    void print() const; // print 함수 선언

    int getYear() const { return m_year; }
    int getMonth() const { return m_month; }
    int getDay() const { return m_day; }
};

Date::Date(int year, int month, int day) // 생성자 정의
    : m_year{ year }
    , m_month{ month }
    , m_day{ day }
{
}

void Date::print() const { // print 함수 정의
    cout << "Date(" << m_year << ", " << m_month << ", " << m_day << ")\n";
}

int main() {
    const Date d{ 2015, 10, 14 };
    d.print();
    return 0;
}