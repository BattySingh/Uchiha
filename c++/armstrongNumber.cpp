// Program to check if a number is a armstrong number or not

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num, rem = 0, res = 0, sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    int temp = num;

    while (temp != 0) {
        rem = temp % 10;
        res = temp / 10;
        temp = res;
        sum = sum + (rem*rem*rem);
    }

    if (sum == num) cout << num << " is an Armstrong number" << endl;
    else cout << num << " is NOT an Armstrong number" << endl;
}
