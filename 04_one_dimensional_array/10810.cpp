#include <iostream>
using namespace std;

int main() {
    int N, M, i, j, k;
    int basket[101] = { 0, }; // N, M <=100

    cin >> N >> M;
    for (int p = 0; p < M; p++) {
        cin >> i >> j >> k;

        for (int c = i; c <= j; c++) {
            basket[c] = k;
        }
    }

    for (int p = 1; p <= N; p++) {
        cout << basket[p] << " ";
    }
}