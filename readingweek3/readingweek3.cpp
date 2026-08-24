#include <iostream>
#include <string>
#include <iterator> // for size() ssize()
#include <cstddef> // for size_t
using namespace std;

template <typename T, size_t N>
constexpr size_t length(const T(&)[N]) noexcept {
    return N;
}

int main() {
    int array[] { 1, 1, 2, 3, 5, 8, 13, 21 };
    cout << "The array has: " << length(array) << " elements";
    return 0;
}