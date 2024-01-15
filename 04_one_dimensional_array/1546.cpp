#include <iostream>
using namespace std;

int main() {
    double scores[1000] = { 0 };
    int num;

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> scores[i];
    }

    double max;
    max = scores[0];
    for (int i = 1; i < num; i++) {
        if (max < scores[i]) {
            max = scores[i];
        }
    }

    // cout << max << endl;

    for (int i = 0; i < num; i++) {
        scores[i] = scores[i] / max * 100;
        // cout << scores[i] << " ";
    }

    double sum = 0;
    for (int i = 0; i < num; i++) {
        sum += scores[i];
    }

    double avg = sum / num;

    cout << avg << endl;
}