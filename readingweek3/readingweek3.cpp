#include <iostream>
#include <string>
using namespace std;

const int& getNextId() {
    static int s_x = 0; // static const가 아닌 정적지역변수만 사용.
    ++s_x; // ++ 이니깐 const를 쓸 수 없음.
    return s_x;
}

int main() {
    const int id1 = getNextId();
    const int id2 = getNextId();
    cout << id1 << id2 << '\n';
    return 0;
}