// Program to calculate discount

#include <iostream>
using namespace std;

int main() {
    float totalAmount;
    cout << "Enter the total amount: ";
    cin >> totalAmount;

    if (totalAmount < 100) {
        cout << "No discount" << endl;
    } else if ((totalAmount >= 100) && (totalAmount < 500)) {
        cout << "You will get 10% discount" << endl;
        cout << "Discount is " << (totalAmount * 0.1) << endl;
    } else if (totalAmount >= 500) {
        cout << "You will get 20% discount" << endl;
        cout << "Discount is " << (totalAmount * 0.2) << endl;
    }

    return 0;
}
