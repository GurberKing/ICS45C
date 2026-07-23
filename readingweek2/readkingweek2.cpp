#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name{};
    int age{};

    void kisses(const Person& person){
        cout << name << " kisses " << person.name << '\n';
    }
};

int main() {
    Person joe { "Joe", 29 };
    Person kate { "kate", 27};

    joe.kisses(kate);
}