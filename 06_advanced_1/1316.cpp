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
		for (int j = 0; j < GroupWord[i].length(); j++) { // 각 line별 word의 길이
			// 기존에 있는 알파벳인지 확인
			if (alpa[GroupWord[i][j] - 'a'] == 1) { // 기존 알파벳이고
				if (GroupWord[i][j] == GroupWord[i][j - 1]) { // 그룹단어이면
					continue;
				}
				else { // 그룹단어가 아니면
					res = 0; // 표시
				}
			}
			else { // 기존 알파벳이 아니면 alpa에 1표시
				idx = (int)GroupWord[i][j] - 'a';
				alpa[idx] = 1;
			}
		}

		if (res == 0) { // 그룹단어가 아니면
			count += 0; // 노카운트
		}
		else { // 그룹단어이면
			count += 1; // 카운트
		}

		for (int j = 0; j < 26; j++) {
			alpa[j] = 0;
		}
		res = 1;
	}

	cout << count; // 그룹단어인 개수
}