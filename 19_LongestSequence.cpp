
#include <iostream>

using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned & arrSize) {
    cin >> arrSize;

    if (arrSize > maxSize) {
        return false;
    }

    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    return true;
}

int main()
{
    unsigned arrSize;
    int arr[maxSize];

    if (getArray(arr, arrSize) == false) {
        return -1;
    }

    int maxLength = 0;
    int longestNumber = 0;

    int curLength = 1;
    int curNumber = arr[0];

    for (int i = 1; i < arrSize; i++) {
        if (curNumber == arr[i]) {
            curLength++;
        }
        else {
            if (curLength >= maxLength) {
                maxLength = curLength;
                longestNumber = curNumber;
            }

            curLength = 1;
            curNumber = arr[i];
        }
    }

    if (curLength >= maxLength) {
        maxLength = curLength;
        longestNumber = curNumber;
    }

    for (int i = 0; i < maxLength; i++) {
        cout << longestNumber << " ";
    }
    cout << endl;

    return 0;
}

