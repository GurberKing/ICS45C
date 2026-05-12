#include <iostream>
#include <string>
using namespace std;

void randomfunction(int n) {
    cout << "result: " << n << endl;
}

void randomfunction(int n, int m) {
    cout << "1st result: " << n << endl;
    cout << "2nd result: " << m << endl;
}
int main() {
    randomfunction(3);
    randomfunction(5, 6);
    return 0;
}