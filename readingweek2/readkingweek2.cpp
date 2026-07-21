#include <iostream>
#include <string>
using namespace std;
int main() {
    const double& r1 { 5 }; // 값 int 5로 임시 double 객체가 초기화, 
    cout << r1 << endl;

    char c { 'a' };
    const int& r2 { c }; // int 자료형의 임시객체가 생성되고, char 'a' 로 초기화
    cout << r2 << endl; // r2가 int에 대한 참조이기 때문에 97 출력

    // 두 개 모두 참조의 자료형과 임시 객체의 자료형은 동일
    return 0;
}