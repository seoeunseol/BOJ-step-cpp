#include <iostream>
using namespace std;

int main() {
    int testNum, a, b;
    cin >> testNum;

    for (int i = 1; i <= testNum; i++) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
    }
}


