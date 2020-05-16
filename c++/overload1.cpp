#include <iostream>
using namespace std;

bool myFunction(bool x) {
    cout << "X is a boolean with value: " << x;
}

int myFunction(int x) {
    cout << "X is an integer with value: " << x;
}

int main() {
    myFunction(false);
}
