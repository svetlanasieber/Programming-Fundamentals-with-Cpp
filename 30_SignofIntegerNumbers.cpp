

#include <iostream>
#include <string>

using namespace std;

string signOfInteger(int number) {
    string result = "";
    if (number == 0) {
        result = "The number 0 is zero.";
    }
    else if (number < 0) {
        result = "The number " + to_string(number) + " is negative.";
    }
    else {
        result = "The number " + to_string(number) + " is positive.";
    }

    return result;
}

int main()
{
    int num;
    cin >> num;

    cout << signOfInteger(num) << endl;

    return 0;
}
