#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main () {

    double a,b,c; cin >> a >> b >> c;
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (((c*c) + (b*b)) == (a*a) || ((a*a) + (b*b)) == (c*c) || ((a*a) + (c*c)) == (b*b)) {
            cout << "RECTANGULAR";
        } else 
            cout << "Non-rectangular";
    } else
        cout << "NO";

    
    
    

}