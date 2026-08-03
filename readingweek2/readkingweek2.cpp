#include <iostream>
#include <string>
using namespace std;
class Date {
private:
    int m_year { 2020 };
    int m_month { 10 };
    int m_day { 14 };

public:
    void print() const { // 멤버는 다른 비공개멤버에 접근할 수 있다.
        cout << m_year << '/' << m_month << '/' << m_day;
    }
};

int main() {
    Date d {};
    d.print(); // 정상: main은 공개 멤버에 접근할 수 있다.

    return 0;
}