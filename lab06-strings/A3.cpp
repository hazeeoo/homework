#define NDEBUG
#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
using namespace std;

int solve(string s) {
    int count = 0;
    bool inWord = false;
    bool wordStartsWithUpper = false;
    
    for (char c : s) {
        if (isalpha(c)) {
            if (!inWord) {
                inWord = true;
                wordStartsWithUpper = isupper(c);
                if (wordStartsWithUpper) {
                    count++;
                }
            }
        } else {
            inWord = false;
            wordStartsWithUpper = false;
        }
    }
    
    return count;
}

int main() {
    //Dulustan's tests
    {
        assert(solve("People, who can’t Throw something important Away, can never hope to Change anything") == 5);
        assert(solve("To be OR not to be?") == 2);
        assert(solve("GREAT ENEMY FELLED") == 3);    
    }

    //Student's tests
    {
        assert(solve("Hello world From C++ Programming") == 3);
        assert(solve("The Quick Brown Fox Jumps Over The Lazy Dog") == 9);
        assert(solve("I Love Coding in C++ and Python!") == 4);
        assert(solve("test only lowercase words") == 0);
        
        cout << "good" << endl;
    }
}