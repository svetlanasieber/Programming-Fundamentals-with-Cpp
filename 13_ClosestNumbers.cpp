// ClosestNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned& arrSize) {
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

    getArray(arr, arrSize);

    unsigned absDifference = 999999;

    for (int first = 0; first < arrSize; first++)
        for (int second = 0; second < arrSize; second++) {
            if (first != second) {
                int currentAbsDiff = abs(arr[first] - arr[second]);
                if (currentAbsDiff <= absDifference)
                    absDifference = currentAbsDiff;
            }
            
        }

    if (absDifference == 999999)
        absDifference = 0;

    cout << absDifference << endl;

    return 0;
}
