#include <iostream>
#include <string_view>
using namespace std;

struct Cat {
    string_view name{ "cat" };
    int numLegs{ 4 };
};

struct Dog {
    string_view name{ "dog" };
    int numLegs{ 4 };
};

struct Chicken {
    string_view name{ "chicken" };
    int numLegs{ 2 };
};

int main() {
    constexpr Cat animal;
    cout << "A " << animal.name << " has " << animal.numLegs << " legs\n";
    return 0;
}