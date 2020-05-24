#include <iostream>
using namespace std;

int main() {
    int num, count = 1;
    cout << "Enter a number: ";
    cin >> num;

    do {
        cout << count << endl;
        count++;
    } while (count <= num);

    return 0;
}
