//
//  Document.hpp
//  CS2 Project
//
//  Created by Yassin Tantawy on 24/04/2023.
//

#ifndef Document_hpp
#define Document_hpp
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

class Document
{
private:
    vector <string> content;
    
public:
    Document (string file_path);
    string getSentenceAtIndex (string file_path, int index);
};

#endif /* Document_hpp */
