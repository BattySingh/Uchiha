// Array is created by user by size they want

#include <iostream>
using namespace std;

int main() {
    int arraySize, numberSearch, number;
    cout << "Enter the array size: ";
    cin >> arraySize;

    int userArr[arraySize] = {};
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter the number: ";
        cin >> number;
        userArr[i] = number;
    }
    cout << "***********************************************" << endl;
    cout << "Enter the number to search for: ";
    cin >> numberSearch;

    for (int i = 0; i < arraySize; i++) {
        if (userArr[i] == numberSearch) {
            cout << "Success. Number found at: " << i << endl;
            break;
        } else {
            continue;
        }
    }
    return 0;
}
