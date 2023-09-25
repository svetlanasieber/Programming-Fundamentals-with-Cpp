

#include <iostream>
#include <string>

using namespace std;

string gradeWord(float grd) {
    string result = "";
    if (grd < 3.00)
        result = "Fail";
    else if (grd <= 3.49)
        result = "Poor";
    else if (grd <= 4.49)
        result = "Good";
    else if (grd <= 5.49)
        result = "Very good";
    else
        result = "Excellent";

    return result;
}

int main()
{
    float grade;
    cin >> grade;

    cout << gradeWord(grade) << endl;

    return 0;
}

