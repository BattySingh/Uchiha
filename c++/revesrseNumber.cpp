// Program to reverse a number

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num, newNum = 0, res = 0, rem = 0;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;

    while (temp != 0) {
        rem = temp % 10;
        res = temp / 10;
        temp = res;
        newNum = (newNum * 10) + rem;
    }
    cout << "New reversed number is: " << newNum << endl;
    return 0;
}
