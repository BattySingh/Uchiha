#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter 3 numbers(separated by space): ";
    cin >> num1 >> num2 >> num3;

    if ( (num1 > num2) && (num1 > num3) ) {
        cout << num1 << " is the greatest" << endl;
    } else {
        if (num2 > num3) {
            cout << num2 << " is greatest" << endl;
        } else {
            if ( (num1 == num2) || (num1 == num3) ) {
                if (num1 == num2) {
                    cout << num1 << " and " << num2 << " are equal" << endl;
                } else if (num1 == num3) {
                    cout << num1 << " and " << num3 << " are equal" << endl;
                } else {
                    cout << num3 << " and " << num2 << " are equal" << endl;
                }
            } else {
                cout << num3 << " is the greatest" << endl;
            }
        }
    }

    return 0;
}
