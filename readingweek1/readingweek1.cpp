#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4}; // static allocation
    for (int i = 0; i < 4; ++i) {
        cout << arr1[i] << endl;
    }

    return 0;
}