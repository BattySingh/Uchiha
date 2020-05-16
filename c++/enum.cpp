#include <iostream>
using namespace std;

enum days { mon, tues, wed, thurs, fri, sat, sun };

int main() {
    days day = wed;

    if ( day == fri) {
        cout << "Lucky Day" << endl;
    } else {
        cout << "Gotta figure something out!" << endl;
    }
    return 0;
}
