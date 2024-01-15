#include <iostream>
using namespace std;

int main() {
    string s;
    int testNum;

    cin >> testNum;
    for (int i = 0; i < testNum; i++) {
        cin >> s;
        cout << s[0] << s[s.length() - 1] << endl;
    }
}