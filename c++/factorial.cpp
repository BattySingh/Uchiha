// Program to find the factorial of a number

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num, fact = 1;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = num; i > 0; i--) {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is " << fact << endl;
    return 0;
}
