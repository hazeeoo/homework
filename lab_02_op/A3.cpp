#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main () {

    int x; cin >> x;
    if (x < 1582 || x > 2200) {
        cout << "out of range";
        return 0;
    } else {
        if ((x%400 == 0) or ((x%4 == 0) && (x%100 != 0))) {
            cout << "leap year";
        } else {
            cout << "non-leap year";
        }
    }
}