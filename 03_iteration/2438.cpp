#include <iostream>
using namespace std;

int main() {
    int line;
    cin >> line;

    for (int i = 1; i <= line; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}