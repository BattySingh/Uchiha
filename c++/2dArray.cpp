// Program for 2-D arrays

#include <iostream>
using namespace std;

int main() {
    int a[3][4] = {
        {1, 2, 3, 4},
        {3, 2, 4, 2},
        {5, 3, 1, 8}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
