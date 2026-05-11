#include <iostream>
#include <string>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++) {  // ++i 나 i++ 나 loop 안에서는 0부터 9까지임 i값
        cout << i * i << endl;
    }
    return 0;
} 