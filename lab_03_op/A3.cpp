#include <iostream>

using namespace std;

int main()
{
int n; cin >> n;
int index = 1;
int max; cin >> max;
for (int i = 1; i < n; i++)
{
    int x; cin >> x;
    
    if (x >= max) {
        max = x;
        index = i;
    }
}
cout << max << " " << index;
}