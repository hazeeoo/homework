#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main () {

    char x; cin >> x;
    if (isdigit(x)) {
        cout << "DIGIT";
    } else if (isalpha(x)) {
        if (isupper(x)) {
            cout << "CAPITAL";
        } else {
            cout << "LOWERCASE";
        }

    } else {
        cout << "NON-ALPHANUMERIC";
    }
}