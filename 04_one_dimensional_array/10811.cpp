#include <iostream>
using namespace std;

int main() {
    int N, M;
    int i, j;
    int arr[100] = { 0 };

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        arr[i] = i;
    }

    for (int p = 0; p < M; p++) {
        cin >> i >> j;

        for (int r = 0; r <= (j - i) / 2; r++) {
            swap(arr[i + r], arr[j - r]);
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
    }
}