#include <iostream>
#include <string>
using namespace std::string_literals;
int main() {
    constexpr std::string name = "Alex"s; // compile error
}