// Program to display digits of a number

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num, res = 0, rem = 0;
    cout << "Enter a number: ";
    cin >> num;
    int count = 0;
    int temp = num;

    while (temp != 0) {
        rem = temp % 10;
        res = temp / 10;
        temp = res;
        count++;
    }

    temp = num;
    while (count > 0) {
        rem = temp % 10;
        res = temp / 10;
        temp = res;
        cout << rem << endl;
        count--;
    }
    return 0;
}
