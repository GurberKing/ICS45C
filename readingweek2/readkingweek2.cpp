#include <iostream>
#include <string>
#include "add.h"
using namespace std;

int add(int x, int y);
int main() {
    cout << "int x + int y = " << add(3, 4) << endl;
    return 0;
}