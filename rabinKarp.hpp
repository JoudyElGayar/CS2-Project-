//
//  rabinKarp.hpp
//
//
//
//

#ifndef rabinKarp_hpp
#define rabinKarp_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class RabinKarpMatcher {
public:
    RabinKarpMatcher(const string& pattern) : pattern(pattern), hash(0), pattern_hash(0), base(256), prime(101) {
        for (size_t i = 0; i < pattern.size(); ++i) {
            pattern_hash = (pattern_hash * base + pattern[i]) % prime;
        }
        hash = pattern_hash;
    }

    vector<int> match(const string& text) const; //to search for occurrences of the pattern string in our database
    

        

private:
    Document doc;
    string pattern;
    int hash;
    int pattern_hash;
    int base;
    int prime;
};
#endif /* rabinKarp_hpp */
