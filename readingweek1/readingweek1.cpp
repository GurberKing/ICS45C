#include <iostream>
#include <string>
using namespace std;

void passbyreference(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void passbyvalue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int val1 = 2;
    int val2 = 3;
    cout << val1 << " "<< val2 << endl;
    passbyvalue(val1, val2);
    cout << val1 << " " << val2 << endl;
    passbyreference(val1, val2);
    cout << val1 << " " << val2 << endl;
    return 0;
} 