#include <iostream>
#include <cmath>

using namespace std;

int cntNums(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
int l, r; cin >> l >> r;
for (int num = l; num <= r; num++) // идем от l до r ++1
{
    int sum = 0;
    int i = num;
    int digitCount = cntNums(i);

    // каждое число в сумму закидываем
    while (i > 0)
    {
        int digit = i % 10;
        sum += pow(digit, digitCount);
        i /= 10;
    }

    if (sum == num) // сравниваем сумму с числом исходным
        cout << num << " ";
}
}