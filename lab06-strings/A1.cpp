#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cassert>
using namespace std;

vector<int> solve(string s){
    int upper = 0, lower = 0, digits = 0;
    
    for (char c : s) {
        if (isupper(c)) {
            upper++;
        } else if (islower(c)) {
            lower++;
        } else if (isdigit(c)) {
            digits++;
        }
    }
    
    return {upper, lower, digits};
}

int main(){
    //Dulustan's tests
    {
        assert(solve("Mr. 2 is Bon-chan") == vector<int>({2, 9, 1}));
        assert(solve("Wanted Dead or Alive 200000$") == vector<int>({3, 14, 6}));
        assert(solve("One Piece 1997") == vector<int>({2, 6, 4}));
        assert(solve("10! is 3628800") == vector<int>({0, 2, 9}));    
    }

    //Student's tests
    {
        assert(solve("Hello World 123") == vector<int>({2, 8, 3}));
        assert(solve("ABC def 456 GHI") == vector<int>({6, 3, 3}));
        assert(solve("Test String 7890") == vector<int>({2, 8, 4}));
        
        cout << "All good" << endl;
    }
    
    return 0;
}