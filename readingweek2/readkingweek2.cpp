#include <iostream>
#include <string>
using namespace std;

class Ball {
private:
    string m_color {};
    double m_radius {};
public:
    Ball(string color, double radius)
        : m_color { color }
        , m_radius { radius }
    {
    }

    void print(const Ball& ball) {
        cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    }
};

int main() {
    Ball blue { "blue", 10.0 };
    print(blue);

    Ball red { "red", 12.0 };
    print(red);

    return 0;
}