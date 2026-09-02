#include <iostream>
#include <string>
using namespace std;

int main() {
    constexpr int arr[] { 9, 7, 5, 3, 1 };
    const int* begin{ arr }; // 시작원소 가리킴
    const int* end{ arr + size(arr) }; // 마지막원소의 바로 다음을 가리킴

    for (; begin != end; ++begin) { // begin부터 end 직전까지 반복
        cout << *begin << ' '; // 현재 원소 얻기 위해 역참조.
    }
    return 0;
}