#include <iostream>
#include <string>
#include <algorithm> // for copy
using namespace std;
int main() {
    int arr[] { 1, 2, 3 };
    int src[] { 5, 6, 7 };

    copy(begin(src), end(src), begin(arr));
    // src 배열의 내용을 arr로 복사.
    cout << arr[0] << '\n';
    return 0;
}