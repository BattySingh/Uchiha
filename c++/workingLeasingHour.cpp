#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Enter the hour: ";
    cin >> hour;

    if ( (hour >= 0) && (hour <= 23) ) {
        if ( (hour >= 9) && (hour <= 18) ) {
            cout << "Working Hour!" << endl;
        } else {
            cout << "Leasing Hour!" << endl;
        }
    } else {
        cout << "INPUT CORRECT TIME" << endl;
    }
    return 0;
}
