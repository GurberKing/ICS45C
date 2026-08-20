#include <iostream>
#include <string>
using namespace std;

const int& getNextId() {
    static int s_x = 0; // static const가 아닌 정적지역변수만 사용.
    ++s_x;
    return s_x;
}

int main() {
    const int& id1 = getNextId(); // 1로 예상 하지만 2로
    const int& id2 = getNextId(); // 2로 예상 결과도 2.
    cout << id1 << id2 << '\n';
    return 0;
}