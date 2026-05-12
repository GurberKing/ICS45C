#include <iostream>
#include <string>
using namespace std;
// array parameters 는 pass by reference 처럼 사용된다. &이 없어도.
double average(int list[], int length) {
    double total = 0;
    for (int count = 0; count < length; count ++) {
        total += double(list[count]);
    }
    return total/length;
}

void add_list(int first[], int second[], int third[], int length) {
    for (int i = 0; i<length; i++) {
        third[i] = first[i] + second[i];
    }
}

// 이 코드를 보면, first 와 second는 값value 이 변경 되지 않는걸 볼 수 있다. 그렇기에 const 로 수정허용하지않게 보장.
void add_list(const int first[], const int second[], int third[], int length) {
    for (int i = 0; i<length; i++) {
        third[i] = first[i] + second[i];
    }
}

int main() {

    return 0;
}