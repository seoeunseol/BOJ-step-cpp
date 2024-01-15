#include <iostream>
using namespace std;

int main() {
    int arrNum, findNum;
    int arr[101];

    cin >> arrNum;
    for (int i = 0; i < arrNum; i++) {
        cin >> arr[i];
    }

    cin >> findNum;

    int count = 0;
    for (int i = 0; i < arrNum; i++) {
        if (arr[i] == findNum) {
            count++;
        }
    }

    cout << count;
}