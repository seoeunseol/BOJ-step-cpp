#include <iostream>
using namespace std;

int main() {
	string subject[20], grade[20];
	double credit[20];
	double GPA[20], CumulativeGPA = 0;
	int sum = 0;

	for (int i = 0; i < 20; i++) {
		cin >> subject[i] >> credit[i] >> grade[i];
	}

	for (int i = 0; i < 20; i++) {
		if (grade[i] == "A+") { GPA[i] = 4.5; }
		else if (grade[i] == "A0") { GPA[i] = 4.0; }
		else if (grade[i] == "B+") { GPA[i] = 3.5; }
		else if (grade[i] == "B0") { GPA[i] = 3.0; }
		else if (grade[i] == "C+") { GPA[i] = 2.5; }
		else if (grade[i] == "C0") { GPA[i] = 2.0; }
		else if (grade[i] == "D+") { GPA[i] = 1.5; }
		else if (grade[i] == "D0") { GPA[i] = 1.0; }
		else if (grade[i] == "F") { GPA[i] = 0.0; }
		else { GPA[i] = -1; }
	}

	for (int i = 0; i < 20; i++) {
		if (GPA[i] == -1) {
			sum += 0;
		}
		else {
			sum += credit[i];
		}

		if (GPA[i] != -1) {
			CumulativeGPA += credit[i] * GPA[i];
		}
	}

	double avg = CumulativeGPA / sum;

	cout << avg;
}