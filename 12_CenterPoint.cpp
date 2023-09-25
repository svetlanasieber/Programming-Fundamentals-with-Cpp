

#include <iostream>

using namespace std;

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    float d1, d2;
    d1 = x1 * x1 + y1 * y1;
    d2 = x2 * x2 + y2 * y2;

    if (d1 <= d2) {
        cout << "(" << x1 << ", " << y1 << ")" << endl;
    }
    else {
        cout << "(" << x2 << ", " << y2 << ")" << endl;
    }

    return 0;
}

