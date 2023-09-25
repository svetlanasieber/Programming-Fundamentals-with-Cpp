

#include <iostream>

using namespace std;

int getSmallestNumber(int a, int b, int c) {
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else
        return c;
}

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    cout << getSmallestNumber(num1, num2, num3) << endl;

    return 0;
}

