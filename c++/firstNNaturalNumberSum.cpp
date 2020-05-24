// Program to find the sum of first n natural numbers
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls"); // this clears the cmd screen on windows
    int num, sum = 0;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }
    cout << "The sum of first " << num << " natural numbers is " << sum << endl;

    return 0;
}
