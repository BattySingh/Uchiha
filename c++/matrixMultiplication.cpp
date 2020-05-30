// Matrix multiplication
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    int a[2][2] = {
        {1, 2},
        {3, 4}
    };

    int b[2][2] = {
        {1, 2},
        {3, 4}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] * b[i][j] << " ";
        }
        cout << endl;
    }
}
