#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	getline(cin, s);

	if (s.empty()) { // s�� ����ִ� ���
		cout << "0";
	}

	int count = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			count++;
		}
	}

	if (s[0] == ' ') { // �տ� ������ �ִ� ���
		count--;
	}

	if (s[s.length() - 1] == ' ') { // �ڿ� ������ �ִ� ���
		count--;
	}

	cout << count;
}