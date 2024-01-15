#include <iostream>
using namespace std;

int main() {
    int a, count;
    int arr[10] = { 0 };
    int mod[10] = { 0 };
    int flag[42] = { 0 };

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        mod[i] = arr[i] % 42;
    }

    count = 0;
    for (int i = 0; i < 10; i++) {
        if (flag[mod[i]] == 0) {
            flag[mod[i]] = 1;
            count++;
        }

    }

    cout << count;
}