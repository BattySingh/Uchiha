// Find the minimum element in an array
#include <iostream>
using namespace std;

int main() {
    int arNum;
    cout << "Enter the size of an array: ";
    cin >> arNum;
    int a[arNum];

    for (int i = 0; i < arNum; i++) {
        cout << "Enter the element at " << i << ": ";
        cin >> a[i];
    }

    int min;
    for (int i = 0; i < arNum; i++) {
        if (a[i] > min) {
            min = min;
        } else {
            min = a[i];
        }
    }

    cout << "Minimum element in the array: " << min << endl;
    return 0;
}
