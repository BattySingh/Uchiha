// Program to find the multiplication table for a number

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int num;
    cout << "Enter the number for which you want the table to be generated: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " X " << i << " = " << num*i << endl;
    }

    return 0;
}
