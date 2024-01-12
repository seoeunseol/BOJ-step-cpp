#include <iostream>
using namespace std;

int main() {
    string a, b, bigger;

    cin >> a >> b;

    for (int i = 2; i >= 0; i--) {
        if (a[i] > b[i]) {
            bigger = a;
            break;
        }
        else if (a[i] < b[i]) {
            bigger = b;
            break;
        }
        else {
            continue;
        }
    }

    cout << bigger;
}