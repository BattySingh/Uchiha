// Program to print 1 to n numbers

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int count = 1;

    while (count <= num) {
        cout << count << endl;
        count = count + 1;
    }

    return 0;
}
