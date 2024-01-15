#include <iostream>
using namespace std;

int main() {
    int byte, longNum;

    cin >> byte;
    if (byte % 4 == 0) {
        longNum = byte / 4;
    }
    else {
        longNum = byte / 4 + 1;
    }
    for (int i = 0; i < longNum; i++) {
        cout << "long ";
    }
    cout << "int";
}