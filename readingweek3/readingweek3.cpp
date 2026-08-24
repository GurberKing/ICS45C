#include <iostream>
#include <string>
using namespace std;

int main() {
    const int prime1[5] { 2, 3, 5, 7, 9 };
    const int prime2[] { 2, 3, 5, 6 ,2 }; // 컴파일러가 배열 길이가 5라고 추론.

    int bad[] {}; // 에러발생. 초기화 값이 없기에 컴파일러가 배열 길이가 0이라고 추론. 하지만, 길이가 0인 c스타일 배열은 허용하지 않으므로 오류.
    return 0;
}