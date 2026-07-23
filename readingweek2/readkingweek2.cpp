#include <iostream>
#include <string>
using namespace std;

class Date{
public:
    int m_day{};
    int m_month{};
    int m_year{};

    void print() {
        cout << m_year << " / " << m_month << " / " << m_day << '\n';
    }
};

int main() {
    Date date{ 4, 10, 21 };
    date.m_day  = 16;
    date.print();
    return 0;
}