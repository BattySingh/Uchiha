#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vi;

    for (int i = 0; i < 10; i++) {
        vi.push_back(i);
    }

    for (int x:vi) {
        cout << x << " ";
    }
    cout << endl;

    vector<string> stg;
    cout << "Enter three words: ";
    for (int s = 0; s < 3; s++) {
        string se;
        cin >> se;
        stg.push_back(se);
    }

    for (auto word:stg) {
        cout << word << " : ";
    }
    cout << endl;

    cout << "No. of elements in vi: " << vi.size() << endl;

    vi[5] = 44;
    vi[6] = -3;

    for (auto items:vi) {
        cout << items << " ";
    }
    cout << endl;

    for (int i = 0; i < vi.size(); i++) {
        cout << vi[i] << " ";
    }
    cout << endl;

    return 0;
}
