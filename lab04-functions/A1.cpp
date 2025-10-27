#include<iostream>
// #define NDEBUG
using namespace std;
#include<cassert>

long long power (long long x, unsigned k)
{
    long long sum = 1;
    for (unsigned i = 1; i <= k; i++)
    {
        sum *= x;
    }
    return sum;
}

int main(){
    // int x,p; cin >> x >> p;
    // cout << power(x, p) << endl;
    //Dulustan's tests
    {
        assert(power(1,100) == 1);
        assert(power(2,7) == 128);
        assert(power(2,10) == 1024);  
        assert(power(6,5) == 7776);
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif
    }

    //Придумайте 4 теста.
    //Student's tests
    {
        assert(power(2,11) == 2048);
        assert(power(7,13) == 96889010407);
        assert(power(2, 1) == 2);
        assert(power(5, 0) == 1);
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif
    }
}


