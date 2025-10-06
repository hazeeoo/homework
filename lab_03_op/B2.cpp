#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool has_sol = false;
    int n; cin >> n;
    int np;
    int firstX; cin >> firstX;
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            int x; cin >> x;
            np = x;
            if (x % firstX == 0)
            {
                cout << x << " ";
                has_sol = true;
            }
        }
        else
        {
            int x; cin >> x;
            if (x % np == 0)
            {
                cout << x << " ";
                has_sol = true;
            }

            np = x;

        }



    }
    if (!has_sol)
        cout << "nothing" << endl;

}