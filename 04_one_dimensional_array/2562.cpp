#include <iostream>
using namespace std;

int main() {
    int arr[9];

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    int maxIndex = 0;
    for (int i = 1; i < 9; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << arr[maxIndex] << "\n" << maxIndex + 1;
}