// Program to find the maximum element in an array
#include <iostream>
using namespace std;

int main() {
    int myAr[] = {4, 8, 6, 9, 5, 2, 7};
    int max = 0;

    for (int x:myAr) {
        if (max < x) {
            max = x;
        } else {
            max = max;
        }
    }
    cout << "Biggest element in an array is: " << max << endl;
    return 0;
}
