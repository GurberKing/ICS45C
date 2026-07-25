#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year {};
    int month {};
    int day {};

    void print() const {
        cout << year << '/' << month << '/' << day;
    }
};

void doSomething(const Date& data) {
    data.print();
}

int main() 
{
    Date today { 2020, 10, 14 };
    today.print();

    doSomething(today);
    return 0;
}