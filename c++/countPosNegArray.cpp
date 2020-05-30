// Program to count number of positive and negative numbers in an array
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int arSize;
    cout << "Enter size of array: ";
    cin >> arSize;
    int myArr[arSize];

    for (int i = 0; i < arSize; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> myArr[i];
    }

    int posCount = 0, negCount = 0;
    for (int i = 0; i < arSize; i++) {
        if (myArr[i] >= 0) posCount++;
        else negCount++;
    }
    cout << "Number of positive elements: " << posCount << endl;
    cout << "Number of negatuve elements: " << negCount << endl;
    return 0;
}
