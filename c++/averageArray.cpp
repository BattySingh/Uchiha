// Program to calculate the average of elements in an array
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int arSize;
    cout << "Enter the array size: ";
    cin >> arSize;
    int myArr[arSize];

    for (int i = 0; i < arSize; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> myArr[i];
    }

    int sum = 0;
    for (int i = 0; i < arSize; i++) {
        sum = sum + myArr[i];
    }
    float average = ((float) sum) / arSize;
    cout << "Average of elements in the array: " << average << endl;
    return 0;
}
