#include <iostream>
using namespace std;

int main() {
	int row, col;
	row = col = 9;

	int mtrx[9][9] = { 0 };
	/*
	int** mtrx = new int* [row];
	for (int i = 0; i < row; i++) {
		mtrx[i] = new int[col];
	}
	*/

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> mtrx[i][j];
		}
	}

	int max = 0;
	int row_Index, col_Index;
	row_Index = col_Index = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (max < mtrx[i][j]) {
				max = mtrx[i][j];
				row_Index = i;
				col_Index = j;
			}
		}
	}
	cout << max << endl;
	cout << row_Index + 1 << " " << col_Index + 1;
}