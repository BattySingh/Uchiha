#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (num1 == num2) {
        cout << "Both numbers are equal" << endl;
    } else if(num1 < num2){
        cout << "Second number " << num2 << " is greater than first number " << num1 << endl;
    }

    return 0;
}
