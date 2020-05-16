// Program to guess a number

#include <iostream>
using namespace std;

int main() {
    int answer = 7;
    int myNumber;
    bool run = true;

    while (run) {
        cout << "Enter your number: ";
        cin >> myNumber;

        if (answer == myNumber) {
            cout << "You got it!" << endl;
            run = false;
        }

        if (answer > myNumber) {
            cout << "Too Low" << endl;
        }

        if (answer < myNumber) {
            cout << "Too High" << endl;
        }
    }

    return 0;
}
