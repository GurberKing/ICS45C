#include <iostream>
#include <string>
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

// 테스트 자동화
// 만약에 'a'를 isVowel에 넣었는데 에러가 발생하면 잘못된거니깐 1번이 잘못됐다고 알려줌
// 그러고 나서 'b'를 넣었는데 에러가 발생하면 잘못된거니깐 2번이 잘못됐다고 알려줌.
int testVowel() {
    if (!isVowel('a')) return 1;
    if (isVowel('b')) return 2;
    return 0;
}

int main() {
    int result { testVowel() };
    if (result != 0)
        cout << "testVowel() test " << result << "failed" << endl;
    else
        cout << "testVowel() tests passed" << endl;
    return 0;
}