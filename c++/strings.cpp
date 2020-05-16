#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "What is your name ? ";
    cin >> name;

    string greeting = "Hello, " + name;

    if (name == "Kate") {
        cout << "I know You!" << endl;
    }

    cout << greeting << endl;

    cout << "Length of Greetings is: " << greeting.length() << endl;
    cout << "Find method: " << greeting.find(" ") << endl;

    int space = greeting.find(" ");
    string subString = greeting.substr(space + 1);
    cout << "Substring: " << subString << endl;
    return 0;
}
