// MinAndMax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int minNum = INT32_MAX;
    int maxNum = INT32_MIN;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num <= minNum)
            minNum = num;

        if (num >= maxNum)
            maxNum = num;
    }

    cout << minNum << " " << maxNum;

    return 0;
}

