// Nested loops in c++
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("cls");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << i << " : " << j << endl;
        }
    }
}
