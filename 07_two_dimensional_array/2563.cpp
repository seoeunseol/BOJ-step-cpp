#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int x, y;
	int BlackPaper;
	int paper[100][100] = { 0 };

	cin >> BlackPaper;
	
	for (int i = 0; i < BlackPaper; i++) {
		cin >> x >> y;

		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				paper[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			sum += paper[i][j];
		}
	}

	cout << sum;
}