// Program to tell which out of two words is bigger
#include <iostream>
#include <string>

using namespace std;

int main() {
    string wordOne, wordTwo;

    cout << "Enter the first word: ";
    cin >> wordOne;
    int lengthOne = wordOne.length();

    cout << "Enter the second word: ";
    cin >> wordTwo;
    int lengthTwo = wordTwo.length();

    if (lengthOne == lengthTwo) {
        cout << "Both words are of same length" << endl;
    }

    if (lengthOne > lengthTwo) {
        cout << wordOne << " is bigger than " << wordTwo << endl;
    } else {
        cout << wordTwo << " is bigger than " << wordOne << endl;
    }

    return 0;
}
