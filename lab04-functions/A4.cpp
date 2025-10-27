// #define NDEBUG
#include <cassert>
#include <iostream>

using namespace std;

void sort_by_last(int &a, int &b, int &c)
{
    int x = a % 10; int y = b % 10; int z = c % 10;

    if (x > y) swap(a, b);
    if (x > z) swap(a, c);
    if (y > z) swap(b, c);
}

int main()
{

    //Dulustan's tests
    {
        {
            int a=138, b=2647, c=36971;
            sort_by_last(a,b,c);
            assert(a==36971 && b==2647 && c==138);
        }
        {
            int a=456, b=123, c=789;
            sort_by_last(a,b,c);
            assert(a==123 && b==456 && c==789);
        }
        
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif
    }

    //Минимум 4 теста 
    //Все возможные перестановки a,b,c должны быть протестированы!
    //Student's tests
    {
        {
            int a=111, b=222, c=333;
            sort_by_last(a,b,c);
            assert(a==111 && b==222 && c==333);
        }
        {
            int a=25, b=14, c=36;
            sort_by_last(a,b,c);
            assert(a==14 && b==25 && c==36);
        }
        {
            int a=17, b=28, c=39;
            sort_by_last(a,b,c);
            assert(a==17 && b==28 && c==39);
        }
        {
            int a=73, b=82, c=91;
            sort_by_last(a,b,c);
            assert(a==91 && b==82 && c==73);
        }
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif
    }
}



