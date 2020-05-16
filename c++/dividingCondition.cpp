// Program to divide 2 numbers and checking that denominator is not 0
#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, division;
    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    if (denominator != 0) {
        division = numerator / denominator;
        cout << "Result is: " << division << endl;
    } else {
        cout << "Denominator cannot be 0" << endl;
    }

    return 0;
}
