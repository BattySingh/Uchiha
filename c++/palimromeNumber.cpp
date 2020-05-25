// Program to check if a number is a palimdrome or not
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int temp = num, rem = 0, res = 0, newNum = 0;

    while (temp != 0) {
        rem = temp % 10;
        res = temp / 10;
        temp = res;

        newNum = (newNum * 10) + rem;
    }

    if (newNum == num) cout << num << " is a palimdrome number" << endl;
    else cout << num << " is NOT a palimdrome number" << endl;
    return 0;
}
