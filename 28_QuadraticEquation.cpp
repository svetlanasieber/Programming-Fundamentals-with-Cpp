// QuadraticEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    float discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant < 0) {
        cout << "no roots" << endl;
    }
    else if (discriminant == 0.0f) {
        float x1 = -b / (2 * a);
        cout << x1 << endl;
    }
    else {
        float x1 = (-b + sqrt(discriminant)) / (2 * a);
        float x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << x1 << " " << x2 << endl;
    }

    return 0;
}

