#include <iostream>
using namespace std;

int main() {
    int testNum, a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> testNum;

    for (int i = 0; i < testNum; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}