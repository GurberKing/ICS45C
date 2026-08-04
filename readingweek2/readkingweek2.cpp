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

    const string getColor() const {
        return m_color;
    }

    double getRadius() const {
        return m_radius;
    }
};

void print(const Ball& ball) {
    cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";
}

int main() {
    Ball blue { "blue", 10.0 };
    print(blue);

    Ball red { "red", 12.0 };
    print(red);

    return 0;
}