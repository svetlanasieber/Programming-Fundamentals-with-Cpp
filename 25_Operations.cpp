

#include <iostream>
#include <string>

using namespace std;

void operation(int a, int b, char operation) {
    int result = 0;
    bool zeroDivision = false;

    if (operation == '+') {
        result = a + b;
    }
    else if (operation == '-') {
        result = a - b;
    }
    else if (operation == '*') {
        result = a * b;
    }
    else if (operation == '/') {
        if (b == 0) {
            zeroDivision = true;
        }
        else {
            result = a / b;
        }
        
    }

    if (zeroDivision == true) {
        cout << "Can't divide by zero." << endl;
    }
    else {
        cout << result << endl;
    }
    
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    char op;
    cin >> op;

    operation(num1, num2, op);

    return 0;
}

