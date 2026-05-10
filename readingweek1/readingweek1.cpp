#include <iostream>
#include <string>
using namespace std;
int main(){
    int x = 1234;
    int *ptr = &x;

    while (ptr) {
        cout << "Point: " << ptr << endl;
        ptr = nullptr;
    }
    cout << "Now No point" << endl;
    return 0;
} 