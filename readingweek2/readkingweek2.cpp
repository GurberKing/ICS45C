#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name{};
    int age{};

public:
    Person(const string& personName, int personAge) : name{ personName }, age{ personAge }{
    }

    void kisses(const Person& person){
        cout << name << " kisses " << person.name << '\n';
    }
};

int main() {
    Person joe { "Joe", 29 };
    Person kate { "kate", 27};

    joe.kisses(kate);
}