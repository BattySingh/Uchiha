#include <iostream>
using namespace std;

int add(int x, int y) {
    return x+y;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int sum = add(num1, num2);
    cout << "Addition of numbers " << num1 << " + " << num2 << " is: " << sum << endl;
    return 0;
}
