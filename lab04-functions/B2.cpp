// #define NDEBUG
#include <cassert>
#include <iostream>

using namespace std;
int Syracuse(int n)
{
    int c = 0;
    while (n != 1)
    {
        if (n%2==0)
        {
            n/=2;
        }
        else
        {
            n = (n * 3 + 1) / 2;
        }
        c+=1;
        
    }
    return c;
}

int main()
{
    // int m,n;
    // cin >> m >> n;
    // for (int i = m;i <= n;i++)
    // {
    //     cout << Syracuse(i) << " ";
    // }
    //Dulustan's tests
    {
        assert(Syracuse(1)==0);
        assert(Syracuse(2)==1); 
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif    
    }

    //Тут я поленился вычислять тесты, оставляю это дело за вами.
    //Придумайте 8 тестов.
    //Student's tests
    {
        assert(Syracuse(3) == 5);
        assert(Syracuse(4) == 2);
        assert(Syracuse(5) == 4);
        assert(Syracuse(6) == 6);
        assert(Syracuse(7) == 11);
        assert(Syracuse(8) == 3);
        assert(Syracuse(9) == 13);
        assert(Syracuse(10) == 5);
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif    
    }
}


