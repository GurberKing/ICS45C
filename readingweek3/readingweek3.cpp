#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[] { 1, 2, 3 };
    arr[0] = 4; // 가능
    arr = { 5, 6, 7 }; // 에러
    return 0;
}