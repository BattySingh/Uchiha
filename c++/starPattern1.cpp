// Star pattren
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    for (int i = 0; i < 4; i++) {
        for (int j = 3; j >= 0; j--) {
            if (j <= i) {
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if ( ( i + j ) >= 3 ) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
