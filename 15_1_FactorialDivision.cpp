
#include <iostream>

using namespace std;

float factorial(int n) {
    float result = 1;
    for (int i = n; i > 1; i--) {
        result *= i;
    }

    return result;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    float division = factorial(num1) / factorial(num2);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << division << endl;

    return 0;
}
