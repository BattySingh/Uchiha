#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if ( (age > 0) && (age <= 150) ) {
        if ( (age >= 12) && (age <= 50) ) {
            cout << "You are Young!" << endl;
        } else {
            cout << "You are either Kid or an Adult!" << endl;
        }
    } else {
        cout << "ENTER VALID AGE!" << endl;
    }
    return 0;
}
