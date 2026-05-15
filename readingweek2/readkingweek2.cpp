#include <iostream>
#include <string>
#include <cassert> // assert 사용
#include <cstdlib> // abort 사용(중단)
using namespace std;
bool isVowel(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}
int testVowel() {
    // #ifdef #endif 전처리기
    #ifdef NDEBUG
    // 만약 NDEBUG가 정의되어 있으면 assert가 제거되기에, NDEBUG 가 정의되어 있을 시 프로그램 종료. assert가 안되어서 실행할 필요 없기에.
        cerr << "Tests run with NDEBUG defined (asserts compiled out)";
        abort(); // <cstdlib>
    #endif
    // assert문은 내부가 false일 시 프로그램 멈추고 에러발생.
        assert(isVowel('a'));
        assert(isVowel('e'));
        assert(isVowel('i'));
        assert(isVowel('o'));
        assert(isVowel('u'));
        assert(isVowel('b'));
        assert(isVowel('q'));
        assert(isVowel('y'));
        assert(isVowel('z'));
    return 0;
}

int main() {
    testVowel();
    cout << "All tests succeeded\n";
    return 0;
}