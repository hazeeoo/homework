// #define NDEBUG
#include <cassert>
#include <iostream>

using namespace std;

long long power (long long x, unsigned k)
{
    long long sum = 1;
    for (unsigned i = 1; i <= k; i++)
    {
        sum *= x;
    }
    return sum;
}

long long sum_p(int p, int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += power(i, p);
    }
    return sum;
}

int main(){

    //Dulustan's tests
    {
        assert(sum_p(1,10) == 55);
        assert(sum_p(2,10) == 385);
        assert(sum_p(3,3) == 36);
        assert(sum_p(4,5) == 979);
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif
    }

    //Придумайте 4 теста.
    //Student's tests
    {
        assert(sum_p(0, 5) == 5);
        assert(sum_p(1, 1) == 1);
        assert(sum_p(2, 4) == 30);
        assert(sum_p(3, 2) == 9);
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif
    }
}


