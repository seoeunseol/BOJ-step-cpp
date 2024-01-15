#include <iostream>
using namespace std;

int main() {
    int test_num, a, b;
    cin >> test_num;

    for (int i = 0; i < test_num; i++) {
        cin >> a >> b;
        cout << a + b << endl;
    }
}