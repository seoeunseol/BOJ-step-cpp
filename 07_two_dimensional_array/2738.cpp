#include <iostream>
#include <iomanip>
#define SETW 4
using namespace std;

int main() {
	int row, col;
	cin >> row >> col;

	// 2���� �迭 �����Ҵ� - mA
	int** dM1 = new int* [row];
	for (int i = 0; i < row; i++) {
		dM1[i] = new int[col];
	}

	for (int i = 0; i < row; i++) { // mA�� �� �ֱ�
		for (int j = 0; j < col; j++) {
			cin >> dM1[i][j];
		}
	}

	// 2���� �迭 �����Ҵ� - mB
	int** dM2 = new int* [row];
	for (int i = 0; i < row; i++) {
		dM2[i] = new int[col];
	}
	for (int i = 0; i < row; i++) { // mB�� �� �ֱ�
		for (int j = 0; j < col; j++) {
			cin >> dM2[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			dM1[i][j] = dM1[i][j] + dM2[i][j];
		}
	}

	// matrix ���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << dM1[i][j] << " ";
		}
		cout << endl;
	}
}