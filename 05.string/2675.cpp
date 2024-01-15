#include <iostream>
using namespace std;

int main() {
    string s;
    int testNum, iterNum;

    cin >> testNum;

    for (int i = 0; i < testNum; i++) {
        cin >> iterNum >> s;

        for (int k = 0; k < s.length(); k++) {
            for (int j = 0; j < iterNum; j++) {
                cout << s[k];
            }
        }
        cout << endl;
    }
}