#include <iostream>
using namespace std;

int main() {
    int num;
    int arr[31] = { 0 };

    for (int i = 0; i < 28; i++) {
        cin >> num;
        arr[num] = num;
    }

    int arr2[2] = { 0 };
    int count = 0;
    for (int i = 1; i <= 30; i++) {
        if (arr[i] == 0) {
            arr2[count] = i;
            count++;
        }
    }

    if (arr2[0] < arr2[1]) {
        cout << arr2[0] << " " << arr2[1];
    }
    else {
        cout << arr2[1] << " " << arr2[2];
    }
}