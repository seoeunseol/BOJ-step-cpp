#include <iostream>
#include <string>
using namespace std;

int main() {
	int alpa[27] = { 0 };
	int idx = 0;
	int N;
	int res = 1;
	int count = 0;

	cin >> N;

	string GroupWord[101];
	for (int i = 0; i < N; i++) {
		cin >> GroupWord[i];
	}

	for (int i = 0; i < N; i++) { // input word num
		for (int j = 0; j < GroupWord[i].length(); j++) { // �� line�� word�� ����
			// ������ �ִ� ���ĺ����� Ȯ��
			if (alpa[GroupWord[i][j] - 'a'] == 1) { // ���� ���ĺ��̰�
				if (GroupWord[i][j] == GroupWord[i][j - 1]) { // �׷�ܾ��̸�
					continue;
				}
				else { // �׷�ܾ �ƴϸ�
					res = 0; // ǥ��
				}
			}
			else { // ���� ���ĺ��� �ƴϸ� alpa�� 1ǥ��
				idx = (int)GroupWord[i][j] - 'a';
				alpa[idx] = 1;
			}
		}

		if (res == 0) { // �׷�ܾ �ƴϸ�
			count += 0; // ��ī��Ʈ
		}
		else { // �׷�ܾ��̸�
			count += 1; // ī��Ʈ
		}

		for (int j = 0; j < 26; j++) {
			alpa[j] = 0;
		}
		res = 1;
	}

	cout << count; // �׷�ܾ��� ����
}