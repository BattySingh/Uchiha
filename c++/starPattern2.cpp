// Triangle pattern using nested loops
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j) >= 4) cout << "*";
            else cout << " ";
        }
        for (int k = 0; k < 5; k++) {
            if (i > k) cout << "*";
            else cout << " ";
        } cout << endl;
    }
}
