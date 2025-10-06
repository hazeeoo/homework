#include <iostream>

using namespace std;

int main()
{
int n; cin >> n;
int sum = 0;
double avgsquare;
for (int i = 0; i < n; i++)
{
    int x; cin >> x;
    sum += x*x;
}
avgsquare = sum*1.0 / n;
cout << avgsquare;
}