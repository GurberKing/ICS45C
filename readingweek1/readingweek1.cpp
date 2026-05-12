#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4}; // static allocation
    for (int i = 0; i < 8; ++i) {  // c++ 은 python 과는 다르게 인덱스가 초과해도 무조건 실행하려함! 빠르나 치명적인 단점!
        cout << arr1[i] << endl;
    }

    return 0;
}