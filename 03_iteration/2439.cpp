#include <iostream>
using namespace std;

int main() {
    int line;
    cin >> line;

    for (int i = 1; i <= line; i++) {
        for (int j = 0; j < line - i; j++) {
            cout << " ";
        }

        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}