#include <iostream>
#include <string>
using namespace std;

int main() {
	string CroatiaWord;
	cin >> CroatiaWord;

	int count = 0;
	for (int i = 0; i < CroatiaWord.length(); i++) {
		count++;
		if ("c=" || "c-" || "dz=" || "d-" || "lj" || "nj" || "s=" || "z=") {

		}

		if ('c' == CroatiaWord[i]) {
			if ('=' == CroatiaWord[i + 1] || '-' == CroatiaWord[i + 1]) {
				count--;
			}
		}
		else if ('d' == CroatiaWord[i]) {
			if ('z' == CroatiaWord[i + 1]) {
				if ('=' == CroatiaWord[i + 2]) {
					count--;
				}
			}
			if ('-' == CroatiaWord[i + 1]) {
				count--;
			}
		}
		else if ('j' == CroatiaWord[i]) {
			if ('l' == CroatiaWord[i - 1] || 'n' == CroatiaWord[i - 1]) {
				count--;
			}
		}
		else if ('=' == CroatiaWord[i]) {
			if ('s' == CroatiaWord[i - 1] || 'z' == CroatiaWord[i - 1]) {
				count--;
			}
		}
	}

	cout << count;
}