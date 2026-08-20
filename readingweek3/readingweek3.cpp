#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Enter your name: ";
    string name;
    cin >> name;

    cout << "Enter your favorite color: ";
    string color;
    cin >> color;

    cout << "Your name is " << name << " and your favorite color is " << color;
    return 0;
}