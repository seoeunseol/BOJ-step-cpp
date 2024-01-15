#include <iostream>
#include <string> // getline()을 위한 헤더
using namespace std;

int main() {
    string s;

    for (int i = 0; i < 100; i++) {
        getline(cin, s);

        if (s == "") {
            break;
        }

        cout << s << endl;
    }
}