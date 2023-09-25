

#include <iostream>

using namespace std;

int calculatePower(int n, int p) {
    int result = n;
    if (p == 0) {
        result = 1;
    }
    else {
        for (int i = 1; i < p; i++) {
            result *= n;
        }
    }
    

    return result;
}

int main()
{
    int num, power;
    cin >> num >> power;

    cout << calculatePower(num, power) << endl;

    return 0;
}
