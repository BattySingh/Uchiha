// Program to display star pattern
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    for (int i = 0; i < 4; i++) {
        for ( int j = 0; j < 4; j++) {
            if (i >= j) cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 4; i++) {
        for ( int j = 0; j < 4; j++) {
            if (i > j) { cout << " "; }
            else cout << "*";
        }
        cout << endl;
    }
}
