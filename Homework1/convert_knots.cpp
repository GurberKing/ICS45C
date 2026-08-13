#include <iostream>
#include "convert_knots.hpp"
using namespace std;
int main() {
    int num;
    cout << "Enter a integer: ";
    cin >> num;

    cout << knots_to_miles_per_minute(num) << '\n';
    return 0;
}