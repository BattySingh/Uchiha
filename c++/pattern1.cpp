// Program to print a pattern on screen
#include <iostream>
using namespace std;

int main() {
    int start = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}
