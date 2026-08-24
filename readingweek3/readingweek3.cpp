#include <iostream>
#include <string>
using namespace std;

namespace ProgramData {
    constexpr int square[5] { 1, 4, 5, 9, 2 };
}

int main() {
    const int prime[5] { 2, 3, 5, 7, 11 };
    prime[0] = 17; // error
    return 0;
}