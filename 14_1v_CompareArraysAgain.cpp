

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool areEqual(const vector<int>& array1, const vector<int>& array2) {
    if (array1.size() != array2.size())
        return false;

    for (int i = 0; i < array1.size(); i++) {
        if (array1[i] != array2[i])
            return false;
    }

    return true;
}

void parseArray(vector<int>& array, istringstream& stream) {
    int currentNumber;

    while (stream >> currentNumber) {
        array.push_back(currentNumber);
    }
}

int main()
{
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    vector<int> arr1, arr2;

    istringstream stream1(str1);
    istringstream stream2(str2);

    parseArray(arr1, stream1);
    parseArray(arr2, stream2);

    cout << (areEqual(arr1, arr2) ? "equal" : "not equal") << endl;

    return 0;
}

