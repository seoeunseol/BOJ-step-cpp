#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout.setf(ios::fixed); // 고정 소수점
    cout.precision(10); // 소수점 아래 자릿수 지정
    cin >> a >> b;
    cout << a / b << endl;
}