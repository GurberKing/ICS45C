#include <iostream>
#include <string>
using namespace std;

int g_x { 5 };
int main() {
    static const int s_x { 6 }; // const int 이다.

    [[maybe_unused]] constexpr const int& ref2 {s_x};// constexpr과 const 둘 다 필요.
    return 0;
}