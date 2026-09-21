#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main() {
    char rolls[255] {}; // 문자 254개 + 널문자 1개 넣을 수 있을만큼 큰 배열선언
    cout << "Enter your rolls: ";
    cin.getline(rolls, size(rolls));
    cout << "You entered: " << rolls << '\n';
    return 0;
}