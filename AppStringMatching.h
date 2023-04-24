#ifndef APPSTRINGMATCHING_H
#define APPSTRINGMATCHING_H
#include <iostream>
#include <string>
using namespace std;
class AppStringMatching{
    public: 
    AppStringMatching(string txt);
    void BruteForceMatching(string pattern, int maxDistance);
   private:
   Document doc;
   string txt;
   int hammingDistance (string  s1, string s2); 
   
};
#endif 
