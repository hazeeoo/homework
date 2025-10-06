#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int n1 = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << n1 << " ";
            n1++;
        }
        cout << endl;
    }
}
