#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int k = 0; k < n - i; k++) {
			cout << " ";
		}

		for (int j = 0; j < i * 2 - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = n - 1; i >= 1; i--) {
		for (int k = 0; k < n - i; k++) {
			cout << " ";
		}

		for (int j = 0; j < i * 2 - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}