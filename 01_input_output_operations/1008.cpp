#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout.setf(ios::fixed); // ���� �Ҽ���
    cout.precision(10); // �Ҽ��� �Ʒ� �ڸ��� ����
    cin >> a >> b;
    cout << a / b << endl;
}