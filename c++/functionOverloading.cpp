// Function overloading
#include <iostream>
using namespace std;

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int add(int a, int b, int c) {
    int sum = a + b + c;
    return sum;
}

int main() {
    int a = 3, b = 2, c = 1;

    int sum1 = add(a, b);
    cout << "Sum is " << sum1 << endl;
    int sum2 = add(a, b, c);
    cout << "Sum is " << sum2 << endl;
}
