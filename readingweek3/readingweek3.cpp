#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Enter your full name: ";
    string name;
    getline(cin >> ws, name);

    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Your age + length of name is: " << age + name.length();
    return 0;
}