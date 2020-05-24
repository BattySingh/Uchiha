// Program to find the factors of a number
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num, sum = 0;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if ( num % i == 0 ) {
            cout << i << " is a factor of " << num << endl;
            sum = sum + i;
        }
    }
    cout << "Sum of factor of numbers: " << sum << endl;

    if (sum == (2 * num)) cout << num << " is a perfect number" << endl;
    else cout << num << " is not a perfect number" << endl;

    return 0;
}
