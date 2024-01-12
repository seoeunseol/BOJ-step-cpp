#include <iostream>
using namespace std;

int main() {
    int hour, min, cook_time;
    cin >> hour >> min;
    cin >> cook_time;

    int total_min = min + (hour * 60) + cook_time;

    min = total_min % 60;
    hour = (total_min / 60) % 24;

    cout << hour << " " << min << endl;
}