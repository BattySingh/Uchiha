// Program to add numbers using a function
#include <iostream>
using namespace std;

int add(int a, int b) {
    int add = a + b;
    return add;
}

int main() {
    int num1, num2, sum;
    cout << "Enter the two number: ";
    cin >> num1 >> num2;

    sum = add(num1, num2);
    cout << "The sum of two numbers: " << num1 << " + " << num2 << " is " << sum << endl;
    return 0;
}
