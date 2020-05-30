// Function to calculate m power of n
#include <iostream>
using namespace std;

int pow(int a, int b) {
    int res = 1;
    for (int i = 1; i <= b; i++) {
        res = res * a;
    }
    return res;
}

int main() {
    int num, power, res;
    cout << "Enter the number to find power of: ";
    cin >> num;
    cout << "Enter the power: ";
    cin >> power;

    res = pow(num, power);
    cout << "Result: " << res << endl;
}
