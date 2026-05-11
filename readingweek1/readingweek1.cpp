#include <iostream>
#include <string>
using namespace std;
int main(){
    int score;
    cout << "Enter a student score: ";
    cin >> score;

    int condition = score / 10;
    switch(condition) {
        case 10:
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        default:
            cout << "F" << endl;
    }

    return 0;
} 