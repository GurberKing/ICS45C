#include <iostream>
#include <string>
using namespace std;
int main() {
    const int& ref { 5 }; // const에 대한 lvalue 참조는 rvalue에도 바인딩 가능.
    cout << ref << endl;
    return 0;
}