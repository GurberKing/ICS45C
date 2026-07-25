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

int main() 
{
    Date today { 2020, 10, 14 };
    today.print();
    return 0;
}