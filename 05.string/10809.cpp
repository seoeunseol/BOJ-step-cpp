#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 'a'; i <= 'z'; i++) {
        cout << (int)s.find(i) << " ";
    }
}