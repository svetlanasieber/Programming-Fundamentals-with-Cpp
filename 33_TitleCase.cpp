#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string title;
    getline(cin, title);

    int flag = 1;

    ostringstream output;
    int index = 0;

    while (index < title.length()) {
        char c = title[index];
        index++;

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (flag) {
                c = toupper(c);
                flag = 0;
            }
        }
        else {
            flag = 1;
        }
      
        output << c;
    }

    cout << output.str() << endl;

    return 0;
}

