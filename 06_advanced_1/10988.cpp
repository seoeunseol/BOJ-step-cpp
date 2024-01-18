#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	cin >> word;

	int count = 0;
	for (int i = 0; i < word.length()/2; i++) {
		if (word[i] == word[word.length()-i-1]) {
			count++;
		}
	}
	if (count == word.length()/2) {
		cout << "1";
	}
	else {
		cout << "0";
	}
}