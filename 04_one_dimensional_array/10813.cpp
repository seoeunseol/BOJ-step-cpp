#include <iostream>
using namespace std;

int main() {
    int N, M, a, b;
    int temp;

    cin >> N >> M;

    int arr[101] = { 0 };
    for (int i = 1; i <= N; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    for (int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
    }
}