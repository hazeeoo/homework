#include <iostream>

using namespace std;

int main()
{
int n; cin >> n;
int nol = 0, pos = 0, neg = 0;
for (int i = 0; i < n; i++)
{
    int x; cin >> x;
    if (x == 0)
        nol++;
    else
    {
        if(x > 0)
            pos++;
        else
            neg++;
    }
}
cout << pos << " " << neg << " " << nol << endl;

}
