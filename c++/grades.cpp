// Program takes 3 marks as input and calculates a grade

#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, total, average;
    cout << "Enter the 3 marks: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    average = total / 3;

    if (average >= 60) {
        cout << "A" << endl;
    } else if ((average >= 35) && (average < 60)) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }
}
