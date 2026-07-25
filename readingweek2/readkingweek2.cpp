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

    void print(string prefix) {
        cout << prefix << year << '/' << month << '/' << day;
    }
};
int main() {
    Date today { 2020, 10, 14 };
    today.print();
    cout << '\n';

    today.print("The date is: ");
    cout << '\n';

    return 0;
}