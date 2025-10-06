#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    bool has_solutions = false;
    
    if (a >= 0) {
        if (a == 0) {
            cout << "0 ";
        } else {
            double root = sqrt(a);
            cout << -root << " " << root << " ";
        }
        has_solutions = true;
    }
    
    if (b <= 0) {
        if (b == 0) {
            if (a != 0) cout << "0 ";
        } else {
            double root = sqrt(-b);
            cout << -root << " " << root << " ";
        }
        has_solutions = true;
    }
    
    if (!has_solutions) {
        cout << "No solution";
    }
    
    return 0;
}