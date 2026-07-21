#include <iostream>
#include <string>
using namespace std;
int main() {
    int x = 10;
    int& r = x; // lvalue 는 이거 가능
    r = 20;
    cout << x << endl;

    int& s = 5; // rvalue 는 불가
    const int& t = 5; // const 는 lvalue rvalue 다 가능
    return 0;
}