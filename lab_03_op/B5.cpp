#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x; cin >> x;
    for (int a = 1; a <= 1000; a++)
    {
        for (int b = 1; b <= 1000; b++)
        {
            for (int c = 1; c <= 1000; c++)
            {
                if ((a*a+b*b+c*c) == x)
                {
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }
}
