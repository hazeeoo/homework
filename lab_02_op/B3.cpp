#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main () {

    int n; cin >> n;
    if ((n % 10) % 2 != 0) 
        cout << "yes";
    else if ((n / 10 % 10) % 2 != 0)
        cout << "yes";
    else if ((n / 100 % 10) % 2 != 0)
        cout << "yes";
    else if ((n / 1000 % 10) % 2 != 0)
        cout << "yes";
    else
        cout << "no";

    

    
    
    

}