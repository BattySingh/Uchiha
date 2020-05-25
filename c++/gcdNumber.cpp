// Program to find the GCD of a number

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else if (num2 > num1) {
            num2 = num2 - num1;
        }
    }
    cout << num1 << " is the GCD of a number" << endl;
    return 0;
}
