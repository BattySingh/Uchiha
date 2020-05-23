// Program to find if roots of quadratic equation are real or imaginary

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the values of a, b and c(separated by spaces): ";
    cin >> a >> b >> c;

    int d = (b*b) - (4*a*c);

    if (d > 0) {
        cout << "Roots are real and unequal" << endl;
    } else if (d < 0) {
        cout << "Roots are imaginary" << endl;
    } else {
        cout << "Roots are equal and real" << endl;
    }
}
