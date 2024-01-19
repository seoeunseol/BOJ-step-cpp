#include <iostream>
using namespace std;

int main() {

	char mtrx[5][15] = { 0 }; // 영어 대소문자, 숫자

	for (int i = 0; i < 5; i++) {
		cin >> mtrx[i];
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (mtrx[j][i] != NULL) {
				cout << mtrx[j][i];
			}
		}
	}
}