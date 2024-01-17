#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	getline(cin, s);

	if (s.empty()) { // s가 비어있는 경우
		cout << "0";
	}

	int count = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			count++;
		}
	}

	if (s[0] == ' ') { // 앞에 공백이 있는 경우
		count--;
	}

	if (s[s.length() - 1] == ' ') { // 뒤에 공백이 있는 경우
		count--;
	}

	cout << count;
}