#include <iostream>
#include <string>
using namespace std;

class Date{
public:
    int m_day{};
    int m_month{};
    int m_year{};
};

void printDate(const Date& date) {
    cout << date.m_year << " / " << date.m_month << " / " << date.m_day << '\n';
}

int main() {
    Date date{ 4, 10, 21 };
    date.m_day  = 16;
    printDate(date);
    return 0;
}