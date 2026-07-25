#include <iostream>
#include <string>
using namespace std;

struct Something {
    void print() {
        cout << "non-const\n";
    }

    void print() const {
        cout << "const\n";
    }
};

int main() 
{
    Something s1{};
    s1.print(); // non-const 버전 print() 호출

    const Something s2{};
    s2.print(); // const 버전 print() 호출
    return 0;
}