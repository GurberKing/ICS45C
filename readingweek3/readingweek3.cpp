#include <iostream>
#include <string>
class Point {
private:
    double m_x{};
    double m_y{};
    double m_z{};

public:
    Point(double x=0.0, double y=0.0, double z= 0.0)
        : m_x{x}, m_y{y}, m_z{z} {}
    
    friend std::ostream& operator<< (std::ostream& out, const Point& point);
};

std::ostream& operator<< (std::ostream& out, const Point& point) {
    //operator<< 는 Point클래스의 friend 이므로, Point의 멤버에 접근가능.
    out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";
    return out; // operator<< 호출을 연결 할 수 있도록 std::ostream을 반환.
}

int main() {
    const Point point1 { 2.0, 3.0, 4.0 };
    std::cout << point1 << '\n';
    return 0;
}