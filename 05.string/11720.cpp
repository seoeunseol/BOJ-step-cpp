#include <iostream>
using namespace std;

int main() {
    int num;
    char s;

    cin >> num;

    int sum = 0;
    for (int i = 0; i < num; i++) {
        cin >> s;
        sum += (s - 48);
    }

    cout << sum;
}