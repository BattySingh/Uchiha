// Function template
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    T sum = a + b;
    return sum;
}

int main() {
    int a = 3, b = 2;
    float c = 1.11f;

    int sum1 = add<int>(a, b);
    cout << "Int sum: " << sum1 << endl;
    float sum2 = add<float>(a, c);
    cout << "Float sum: " << sum2 << endl;
}
