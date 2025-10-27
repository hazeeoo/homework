#define NDEBUG
#include<cassert>
#include<iostream>

using namespace std;
void simplify(int &num, int &denom);

int my_gcd(int a, int b);



int main()
{
    int a,b; cin >> a >> b;
    simplify(a,b);
    //Dulustan's tests GCD
    {
        assert(my_gcd(12,20)==4);
        assert(my_gcd(35,56)==7);
        assert(my_gcd(100,9900)==100);
        assert(my_gcd(999,2775)==111);   
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif 
    }

    //Придумайте 4 теста.
    //Student's tests GCD
    {
        assert(my_gcd(18,24)==6);
        assert(my_gcd(7,13)==1);
        assert(my_gcd(64,48)==16);
        assert(my_gcd(81,27)==27);
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif 
    }

    //Dulustan's tests simplify
    {
        int a=15, b=20;
        simplify(a,b);
        assert(a==3); assert(b==4);

        a=48, b=120; 
        simplify(a,b);  
        assert(a==2); assert(b==5);

        a=1680, b=4620; 
        simplify(a,b);  
        assert(a==4); assert(b==11);   
        #ifndef NDEBUG
            cout << "SUCCESS 3!" << endl;
        #endif 
    }

    //Придумайте 4 теста.
    //Student's tests simplify
    {
        int a=25, b=100;
        simplify(a,b);
        assert(a==1); assert(b==4);

        a=14, b=21;
        simplify(a,b);
        assert(a==2); assert(b==3);

        a=36, b=60;
        simplify(a,b);
        assert(a==3); assert(b==5);

        a=17, b=34;
        simplify(a,b);
        assert(a==1); assert(b==2);
        
        #ifndef NDEBUG
            cout << "SUCCESS 4!" << endl;
        #endif 
    }
}

void simplify(int &num, int &denom)
{
    int gcd = my_gcd(num, denom);

    num /= gcd;
    denom /= gcd;
    
    cout << num << " " << denom;
}

int my_gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}