#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    string find;
    getline(cin, find);

    string replace;
    getline(cin, replace);

    int foundIndex = text.find(find);

    while (foundIndex != string::npos) {
        
        text.replace(foundIndex, find.length(), replace);

        foundIndex += replace.length();

        foundIndex = text.find(find, foundIndex);

    }

    cout << text << endl;

    return 0;
}

