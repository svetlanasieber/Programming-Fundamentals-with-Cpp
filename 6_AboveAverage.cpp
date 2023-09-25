// AboveAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

    getArray(arr, arrSize);

    int arrSum = 0;
    
    for (int i = 0; i < arrSize; i++) {
        arrSum += arr[i];
    }

    int arrAverage = arrSum / arrSize;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] >= arrAverage) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

