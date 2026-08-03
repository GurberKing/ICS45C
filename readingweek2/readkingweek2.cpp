#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string m_name {};

public:
    void kisses(const Person& p) const{
        cout << m_name << " kisses " << p.m_name << '\n';
    }

    void setName(string name) {
        m_name = name;
    }
};

int main() {
    Person joe;
    joe.setName("Joe");

    Person kate;
    kate.setName("Kate");

    joe.kisses(kate);
    return 0;
}