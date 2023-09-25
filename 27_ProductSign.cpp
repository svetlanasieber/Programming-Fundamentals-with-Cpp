// ProductSign.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    float num1 = 0.0f;
    float num2 = 0.0f;
    float num3 = 0.0f;

    cin >> num1 >> num2 >> num3;

    if (num1 == 0.0f || num2 == 0.0f || num3 == 0.0f) {
        cout << "+" << endl;
        return 0;
    }

    int negativeCounter = 0;
    if (num1 < 0)
        negativeCounter += 1;
    if (num2 < 0)
        negativeCounter += 1;
    if (num3 < 0)
        negativeCounter += 1;

    if (negativeCounter % 2 == 0)
        cout << "+" << endl;
    else
        cout << "-" << endl;

    return 0;
}