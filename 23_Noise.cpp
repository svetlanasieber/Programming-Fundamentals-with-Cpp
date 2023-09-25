

#include <iostream>
#include <cmath>

using namespace std;

// const unsigned maxSize = 3000;

int main()
{
    int number = 0;

    while (true) {
        char symbol;
        cin >> symbol;

        if (symbol == '.')
            break;

        if (symbol >= '0' && symbol <= '9') {
            number *= 10;
            number += (symbol - '0');
        }
    }

    cout << sqrt(number) << endl;

    return 0;
}
