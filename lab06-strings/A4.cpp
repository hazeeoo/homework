#define NDEBUG
#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
using namespace std;

bool solve(string s) {
    string cleaned;
    
    for (char c : s) {
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    
    int left = 0;
    int right = cleaned.size() - 1;
    
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false; 
        }
        left++;
        right--;
    }
    
    return true; 
}

int main() {
    //Dulustan's tests
    {
        assert(solve("F"));
        assert(solve("Madam, I’m Adam"));
        assert(solve("Do geese see God?"));
        assert(solve("No lemon, no melon"));
        assert(solve("Are we not drawn onward, we few, drawn onward to new era?"));  
        assert(!solve("Was it cat I saw?"));    
        assert(!solve("Borrow or rob?"));    
        assert(!solve("xyztyx"));  
    }

    //Student's tests
    {
        assert(solve("A man a plan a canal Panama"));
        assert(solve("Never odd or even"));
        assert(solve("Race car"));
        
        assert(!solve("Hello world"));
        assert(!solve("Palindrome test"));
        assert(!solve("C++ is awesome"));
        
        cout << "good" << endl;
    }
}