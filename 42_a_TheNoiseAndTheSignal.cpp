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

    string longestNoise = "";

    while (input >> current) {
        string noise = "";

        for (int i = 0; i < current.length(); i++) {
            char c = current[i];

            if (!(c >= '0' && c <= '9')) {
                noise += c;
            }
        }

        if (noise.length() > longestNoise.length()) {
            longestNoise = noise;
        }
        else if (noise.length() == longestNoise.length()) {
            if (noise < longestNoise) {
                longestNoise = noise;
            }
        }
    }

    if (longestNoise != "") {
        cout << longestNoise << endl;
    }
    else {
        cout << "no noise" << endl;
    }
    

    return 0;

}

