#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	cin >> word;

	int alpa[26] = { 0 };

	for (int i = 0; i < word.length(); i++) {
		if ('A' <= word[i] && word[i] <= 'Z') {
			word[i] = word[i] + 32;
		}

		alpa[word[i]-'a'] += 1;
	}

	int max = alpa[0];
	int maxIndex = 0;
	int count = 0;
	for (int i = 1; i < 26; i++) {
		if (max != 0 && max == alpa[i]) {
			count++; 
		}
		if (max < alpa[i]) {
			maxIndex = i;
			max = alpa[i];
			count = 0;
		}
	}

	if (count == 0) {
		cout << char(maxIndex+'A');
	}
	else {
		cout << "?";
	}
}