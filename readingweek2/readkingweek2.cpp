#include <iostream>
#include <string_view>
using namespace std;

struct Date {
    int day{};
    int month{};
    int year{};
};

void printDate(const Date& fate){
    cout << fate.day << '/' << fate.month << '/' << fate.year;
}

int main() {
    Date gate{ 4, 10, 21 };
    printDate(gate);
    return 0;
}