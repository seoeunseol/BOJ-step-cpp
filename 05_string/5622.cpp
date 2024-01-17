#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int time = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') { // 다이얼 2
            time += 3;
        }
        else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') { // 다이얼 3
            time += 4;
        }
        else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') { // 다이얼 4
            time += 5;
        }
        else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') { // 다이얼 5
            time += 6;
        }
        else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') { // 다이얼 6
            time += 7;
        }
        else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') { // 다이얼 7
            time += 8;
        }
        else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') { // 다이얼 8
            time += 9;
        }
        else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') { // 다이얼 9
            time += 10;
        }
    }

    cout << time;
}