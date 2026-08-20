#include <iostream>
#include <string>
using namespace std;

const string& getProgramName() { // return by reference to const
    static const string s_programName = "Calculator";
    // static은 함수가 끝나는 순간 지역변수가 사라지는걸 방지한다.
    return s_programName;
}

int main() {
    cout << "This program is named " << getProgramName();
    return 0;
}