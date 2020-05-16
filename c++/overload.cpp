// Function overloading program
#include <iostream>
using namespace std;

double add(double x, double y) {
    return x+y;
}

double add(double x, double y, double z) {
    return x+y+z;
}

int main() {
    double sum1 = add(1.22, 3.54);
    cout << sum1 << endl;

    double sum2 = add(3.2, 1.1, 1.234);
    cout << sum2 << endl;

    return 0;
}
