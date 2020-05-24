// Program to check if a number is prime number or not

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num, count = 0;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count = count + 1;
        }
    }

    if (count > 2) cout << num << " is not a prime number" << endl;
    else cout << num << " is a prime number" << endl;
    return 0;
}
