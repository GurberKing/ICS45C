constexpr int STR_MAX = 1000;
#include <iostream>
#include <string>
using namespace std;
class Stack
{
private:
    int _top;
    char buf[STR_MAX];
public:
    Stack() {
        _top = 0;
    }

    void push(char c) {
        if (!isFull()) {
            buf[_top] = c;
            _top++;
        }
    }
    char pop() {
        if (isEmpty()) {
            return '@';
        }
        _top--;
        return buf[_top];
    }

    char top() {
        if (isEmpty()) {
            return '@';
        }
        return buf[_top - 1];
    }

    bool isEmpty() {
        return _top == 0;
    }

    bool isFull() {
        return _top == STR_MAX;
    }
};

void push_all(Stack & stk, string line) {
    for (int i = 0; i < line.size(); ++i) {
        stk.push(line[i]);
    }
}

void pop_all(Stack & stk) {
    while (!stk.isEmpty()) {
        cout << stk.pop();
    }
    cout << '\n';
}