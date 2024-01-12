#include <iostream>
using namespace std;

int main() {
    int leap_year;
    cin >> leap_year;

    if ((leap_year % 4 == 0 && leap_year % 100 != 0) || (leap_year % 400 == 0)) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}