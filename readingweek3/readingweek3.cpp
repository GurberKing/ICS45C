#include <iostream>
#include <string>
using namespace std;

int main() {
    constexpr int arr[] {9, 7, 5, 3, 1};

    for (auto e : arr) {
        cout << e << ' ';
    }
    return 0;
}