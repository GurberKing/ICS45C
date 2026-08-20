#include <iostream>
#include <string>
using namespace std;
int main() {
    string name = "Alex";
    cout << "name is " << name << "and length is " << name.length();
    // length(name)이 아니라, name.length()이다.
    // length() 는 string의 멤버함수이기에. name 객체의 멤버함수를 호출하는 방식이다.
    return 0;
}