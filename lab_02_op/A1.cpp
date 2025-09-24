#include <iostream>
#include <string>

using namespace std;

int main () {
    int x; cin >> x;
    if (x > 0)
        cout << "positive";
    else if (x < 0)
        cout << "negative";
    else
        cout << "zero";

}