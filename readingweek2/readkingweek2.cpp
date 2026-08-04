#include <iostream>
#include <string>
#include <optional>
using namespace std;
class Fraction {
private:
    int m_numerator { 0 };
    int m_denominator { 1 };

    //private 생성자는 public 영역에서 직접 호출 불가.
    Fraction(int numerator, int denominator):
        m_numerator{ numerator }, m_denominator{ denominator }
        {
        }

public:
        // 이 함수가 private 멤버에 접근 할 수 있게 해줌.
        friend optional<Fraction> createFraction(int numerator, int denominator);
};

optional<Fraction> createFraction(int numerator, int denominator) {
    if (denominator == 0)
        return {};

    return Fraction{numerator, denominator};
}

int main(){
    auto f1 { createFraction(0, 1) };
    if (f1){
        cout << "Fraction created\n";
    }

    auto f2 { createFraction(0, 0) };
    if (!f2) {
        cout << "Bad fraction\n";
    }
}