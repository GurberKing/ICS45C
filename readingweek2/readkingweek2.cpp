#include <iostream>
#include <string>
using namespace std;
int main() {
    int x { 5 };
    const int& ref { x };
    cout << ref << endl;
    ref = 7; // 오류

    x = 6; // 이건 가능
    return 0;
}