// PrintingTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printLineOfNumbers(int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        printLineOfNumbers(1, i);
    }

    printLineOfNumbers(1, num);

    for (int i = num - 1; i >= 0; i--) {
        printLineOfNumbers(1, i);
    }
}

