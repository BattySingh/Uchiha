// Function to find max of 3 numbers
#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    if (( a > b ) && ( a > c)) {
        return a;
    } else if (b > c) return b;
    else return c;
}

int main() {
    int num1, num2, num3, greatest;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    greatest = max(num1, num2, num3);
    cout << "Greatest of " << num1 << ", " << num2 << " and " << num3 << " is " << greatest << endl;
}
