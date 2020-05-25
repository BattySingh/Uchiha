// Program to find sum of all elements of an array
#include <iostream>
using namespace std;

int main() {
    int myAr[] = {4, 8, 6, 9, 5, 2, 7};
    int sum = 0;

    for (int x:myAr) {
        sum = sum + x;
    }
    cout << "Sum of all elements of an array: " << sum << endl;
    return 0;
}
