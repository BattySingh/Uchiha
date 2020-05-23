// Program to computer arithmetic operations

#include <iostream>
using namespace std;

int main() {
    cout << "Menu options\n1.) Add\n2.) Subtract\n3.) Multply\n4.) Division\n5.) Modulus\n\n";

    int op;
    cout << "Enter the operation to be performed: ";
    cin >> op;

    int mod, num1, num2, sum, sub, mul;
    float div;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case 1:
            sum = num1 + num2;
            cout << "Addition is " << sum << endl;
            break;
        case 2:
            sub = num1 - num2;
            cout << "Subtraction is " << sub << endl;
            break;
        case 3:
            mul = num1 * num2;
            cout << "Multiplication is " << mul << endl;
            break;
        case 4:
            div = (float)num1 / num2;
            cout << "Division is " << div << endl;
            break;
        case 5:
            mod = num1 % num2;
            cout << "Modulus is " << mod << endl;
            break;
        default:
            cout << "Pick only from above menu" << endl;
    }
}
