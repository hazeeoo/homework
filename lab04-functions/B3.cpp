// #define NDEBUG
#include<cassert>
#include <iostream>

using namespace std;

void digit_root(long long &n)
{
    while (n>=10)
    {
        long long prevd = n;
        long long newd = 0;

        while (prevd != 0)
        {
            newd += prevd % 10;
            prevd /= 10;
        }
        
        n = newd;
    }
}

int main()
{
    
    //Dulustan's tests
    {
        {
            long long x=8; digit_root(x);
            assert(x==8);
        }
        {
            long long x=25; digit_root(x);
            assert(x==7);
        }
        {
            long long x=99; digit_root(x);
            assert(x==9);
        }
        {
            long long x=987; digit_root(x);
            assert(x==6);
        }
        {
            long long x=777'777'777'777; digit_root(x);
            assert(x==3);
        }

        #ifndef NDEBUG
        cout << "SUCCESS1!" << endl;
        #endif
    }

    //Придумайте 5 тестов.
    //Student's tests
    {
        {
            long long x = 5; digit_root(x);
            assert(x == 5);
        }
        {
            long long x = 18; digit_root(x);
            assert(x == 9);
        }
        {
            long long x = 49; digit_root(x);
            assert(x == 4);
        }
        {
            long long x = 1234; digit_root(x);
            assert(x == 1);
        }
        {
            long long x = 9999; digit_root(x);
            assert(x == 9);
        }

        #ifndef NDEBUG
        cout << "SUCCESS2!" << endl;
        #endif
    }    
}

