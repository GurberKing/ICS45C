#include <iostream>
#include <string>
using namespace std;

int main() {
    const int arr[] { 3, 2, 1 };
    cout << &arr[0] << ' ' << &arr[1] << ' ' << &arr[2] << '\n';
    cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';

    cout << arr << ' ' << (arr + 1) << ' ' << (arr + 2) << '\n';
    cout << *arr << ' ' << *(arr + 1) << ' ' << *(arr + 2) << '\n';
    return 0;
}