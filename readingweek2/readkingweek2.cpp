#include <iostream>
#include <string>
using namespace std;
int main() {
    short bombs { 1 };

    const int& you {bombs};  // you는 int 객체에만 바인딩 가능, 컴파일러는 bombs를 암시적으로 int 로 변환, 즉 int 임시 객체 생김
    --bombs; // 그렇기에 원래 short 자료형인 bombs를 감소시켜도 you에는 영향없음.

    if (you) { // 즉, 그래서 true 값이 됨.
        cout << "Bombs Away" << endl;
    }
    return 0;
}