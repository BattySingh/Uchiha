#include <iostream>
using namespace std;

int main() {
    int i, j;

    cout << "Enter the first number: ";
    cin >> i;

    cout << "The first number is: " << i << endl << "Enter the second number: ";
    cin >> j;

    if (i < j) {
        cout << "The value i " << i << " is less than " << j << endl;
    } else {
        cout << "The value j " << j << " is less than " << i << endl;
    }

    if (i == j) {
        cout << "Both i and j are equal" << endl;
    }

    if (i > j) {
        cout << "The first number " << i << " is greater than second number " << j << endl;
     }
}
