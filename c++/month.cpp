// Find the month of year

#include <iostream>
using namespace std;

int  main() {
    int mon;
    cout << "Enter the month: ";
    cin >> mon;

    if (mon == 1) cout << "January" << endl;
    else if (mon == 2) cout << "February" << endl;
    else if (mon == 3) cout << "March" << endl;
    else if (mon == 4) cout << "April" << endl;
    else if (mon == 5) cout << "May" << endl;
    else if (mon == 6) cout << "June" << endl;
    else if (mon == 7) cout << "July" << endl;
    else if (mon == 8) cout << "August" << endl;
    else if (mon == 9) cout << "September" << endl;
    else if (mon == 10) cout << "October" << endl;
    else if (mon == 11) cout << "November" << endl;
    else if (mon == 12) cout << "December" << endl;
    else cout << "Please enter a valid month" << endl;
}
