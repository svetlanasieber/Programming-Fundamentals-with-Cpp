#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string inp;
    getline(cin, inp);

    istringstream input(inp);
    string current;

    ostringstream outputWords;
    int sum = 0;

    while (input >> current) {
        char c = current[0];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            outputWords << current << " ";
        }
        else {
            int num = stoi(current);
            sum += num;
        }
    }

    cout << sum << endl;
    cout << outputWords.str() << endl;
    
    return 0;
}

