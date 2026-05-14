#include <iostream>
#include <string>
using namespace std;
int main(){
    int myarray[] = {2, 4};
    int otherdata[]={777, 777};
    for (int i=0; i<4; i++){
        myarray[i]=0;
        cout <<"myarray["<< i << "]=";
        cout << myarray[i]<< endl;
        cout << "add:" << &myarray[i] << endl;
    }
    // c++ 에서는 첫번째 어레이의 범위를 벗어나면 다른 어레이의 값이 변경될 수 있다. 여기 vscode에서는 그렇지 않지만. 그럴 확률이 있다는 뜻인듯.
    for (int i=0; i<2; i++){
        cout <<"otherdata["<< i << "]=";
        cout << otherdata[i]<< endl;
        cout << "add:" << &otherdata[i] << endl;
    }

    return 0;
}