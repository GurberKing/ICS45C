#include <iostream>
#include <string>
using namespace std;
class Point3d {
private:
    int m_x {};
    int m_y {};
    int m_z {};
public:
    void setValues(const int x, const int y, const int z) {
        m_x = x;
        m_y = y;
        m_z = z;
    }

    void print() {
        cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << '\n';
    }
};

int main() {
    Point3d p;
    p.setValues(1, 2, 3);
    p.print();
    return 0;
}