#define NDEBUG
#include <iostream>
#include <string>
#include <cassert>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

void solve(string &s) {
    stringstream ss(s);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    string firstWord = words[0];
    string lastWord = words[words.size() - 1];
    
    if (isupper(firstWord[0])) {
        firstWord[0] = tolower(firstWord[0]);
    }
    
    if (islower(lastWord[0])) {
        lastWord[0] = toupper(lastWord[0]);
    }
    
    s = lastWord;
    for (int i = 1; i < words.size() - 1; i++) {
        s += " " + words[i];
    }
    s += " " + firstWord;
}

int main() {
    //Dulustan's tests
    {
        string s;

        s = "Math is the poetry of logical ideas";
        solve(s);
        assert(s == "Ideas is the poetry of logical math");

        s = "Joy Boy has returned";
        solve(s);
        assert(s == "Returned Boy has joy");

        s = "Claymore berserk vagabond vinland saga";
        solve(s);
        assert(s == "Saga berserk vagabond vinland claymore");                 
    }

    //Student's tests
    {
        string s;

        s = "Hello world from programming";
        solve(s);
        assert(s == "Programming world from hello");

        s = "The quick brown fox jumps";
        solve(s);
        assert(s == "Jumps quick brown fox the");

        s = "Apple banana cherry date elderberry";
        solve(s);
        assert(s == "Elderberry banana cherry date apple");

        s = "Coding is fun and challenging";
        solve(s);
        assert(s == "Challenging is fun and coding");
        
        cout << "good" << endl;
    }
}