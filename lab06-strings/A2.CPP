#define NDEBUG
#include <iostream>
#include <string>
#include <cassert>
#include <sstream>
using namespace std;

void solve(string &s){
    stringstream ss(s);
    string lastName, firstName, middleName;
    
    ss >> lastName >> firstName >> middleName;
    
    s = lastName + " " + firstName[0] + ". " + middleName[0] + ".";
}

int main(){
    //Dulustan's tests
    {
        string s;

        s = "Perelman Grigori Yakovlevich";
        solve(s);
        assert(s == "Perelman G. Y.");

        s = "Nikolaeva Natalya Vasilevna";
        solve(s);
        assert(s == "Nikolaeva N. V.");

        s = "Vasileva Natalya Vasilevna";
        solve(s);
        assert(s == "Vasileva N. V.");  
    }

    //Student's tests
    {
        string s;

        s = "Ivanov Ivan Ivanovich";
        solve(s);
        assert(s == "Ivanov I. I.");

        s = "Petrov Petr Petrovich";
        solve(s);
        assert(s == "Petrov P. P.");

        s = "Sidorova Anna Mikhailovna";
        solve(s);
        assert(s == "Sidorova A. M.");

        cout << "good" << endl;
    }
}