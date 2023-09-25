// GreatestCommonDivisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int gcd = 0;
    if (a == b) {
        gcd = a;
    }

    if (a < b) {
        int tempA = b;
        b = a;
        a = tempA;
    }

    
    while (gcd == 0) {
        int remainder = a % b;
        if (remainder == 0) {
            gcd = b;
        }
        else {
            a = b;
            b = remainder;
        }
    }

    cout << gcd << endl;

    return 0;
}

