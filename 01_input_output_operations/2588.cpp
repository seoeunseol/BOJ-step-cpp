#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cin >> num1;
    cin >> num2;

    cout << num1 * (num2 % 10) << endl; // num2%10 == 5
    cout << num1 * (num2 % 100 / 10) << endl; // num2%100/10 == 85/10 == 8
    cout << num1 * (num2 / 100) << endl; // num2/100 == 385/100 == 3

    cout << num1 * num2 << endl;
}