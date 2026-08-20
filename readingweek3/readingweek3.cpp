#include <iostream>
#include <string>
using namespace std;
int main() {
    string returnByValue();
    // string의 복사본을 반환하는 함수, 비용이 크다.
    string& returnByReference();
    // string에 대한 참조를 반환. 저렴함.
    const string& returnByReferenceToConst();
    // string에 대한 const 참조를 반환함. 저렴함.
    return 0;
}