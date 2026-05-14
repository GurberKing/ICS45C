#include <iostream>
#include <string>
using namespace std;

int compare(int x, int y) {
    return (x > y) ? x : y;
}
int main() {
    int a, b;
    cout << "Enter a int: " << endl;
    cin >> a;
    cout << "Enter a int: " << endl;
    cin >> b;
    cout << compare(a, b) << endl;
    return 0;
}