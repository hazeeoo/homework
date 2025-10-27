// #define NDEBUG
#include<cassert>
#include <iostream>

using namespace std;

bool hamming(int n)
{
    
    while (n % 2 == 0)
        n /= 2;
    while (n % 3 == 0)
        n /= 3;
    while (n % 5 == 0)
        n /= 5;
    
    return n == 1;
}

int main()
{
    // int m,n;
    // cin >> m >> n;
    // for (int i = m;i <= n; i++)
    // {
    //     if (hamming(i))
    //         cout << i << " ";
    // }

    //Dulustan's tests
    {
        assert(hamming(1));
        assert(hamming(8));
        assert(hamming(12));
        assert(hamming(24));
        assert(hamming(45));
        assert(hamming(384));
        assert(!hamming(14));
        assert(!hamming(26));
        assert(!hamming(44));
        assert(!hamming(365));     
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif   
    }

    //Придумайте 3 положительных и 3 отрицательных теста.
    //Student's tests
    {
    assert(hamming(36));
    assert(hamming(50)); 
    assert(hamming(75));
    
    assert(!hamming(49));
    assert(!hamming(77));
    assert(!hamming(91));
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif     
    }    
}


