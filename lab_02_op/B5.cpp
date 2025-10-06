#include <iostream>
#include <cmath>

using namespace std;
int main () {

    int x, y; cin >> x >> y;
    int cnt = 0;

    if (x + 2 <= 8 && y + 1 <= 8) cnt ++;
    if (x + 2 <= 8 && y - 1 >= 1) cnt ++;
    if (x - 2 >= 1 && y + 1 <= 8) cnt ++;
    if (x - 2 >= 1 && y - 1 >= 1) cnt ++;
    if (x + 1 <= 8 && y + 2 <= 8) cnt ++;
    if (x + 1 <= 8 && y - 2 >= 1) cnt ++;
    if (x - 1 >= 1 && y + 2 <= 8) cnt ++;
    if (x - 1 >= 1 && y - 2 >= 1) cnt ++;

    cout << cnt;
}