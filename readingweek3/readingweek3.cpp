#include <iostream>
#include <string>

using namespace std;
int main() {
    cout << "Enter a single digit integer, or -1 to quit: ";
    int num;
    cin >> num;
    constexpr int arr[] = { 0, 1, 4, 9};
    if (num == -1) {
        break;
    }

    for (int i = 0; i < 4; i++) {
        if (arr[i] == num) {
            cout << num << "is a perfect square.\n";
        }
    }
    return 0;
}