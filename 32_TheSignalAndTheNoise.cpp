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

    int maxNum = -999999;

    while (input >> current) {
        int num = 0;
        int i;

        for (i = 0; i < current.length(); i++) {
            char c = current[i];

            if (c >= '0' && c <= '9') {
                num = num * 10 + (c - '0');
            }

        }

        if (num >= maxNum)
            maxNum = num;

    }

    cout << maxNum << endl;

    return 0;
}

