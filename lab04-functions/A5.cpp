#define NDEBUG
#include <cassert>
#include <iostream>

using namespace std;

bool perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return n == sum;
}

int main()
{
    int m = 0; int n = 0;
    cin >> m >> n;
    for (; m <= n; m++)
    {
        if (perfect(m))
            cout << m << endl;
    }

    
    //Dulustan's tests
    {
        assert(perfect(6));
        assert(perfect(28));
        assert(perfect(496));
        assert(perfect(8128));
        assert(!perfect(36));
        assert(!perfect(490));
        assert(!perfect(812));
        assert(!perfect(6458));
        #ifndef NDEBUG
            cout << "SUCCESS!" << endl;
        #endif
    }
    //Тут свои тесты можно не делать, ура!
}



