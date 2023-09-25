// 05.MultiplyEvensSumByOdds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	n = abs(n);
	int sumOdd = 0, sumEven = 0;
	int temp;
	while (n > 0)
	{
		temp = n % 10;
		if (temp%2 ==0)
		{
			sumEven += temp;
		}
		else
		{
			sumOdd += temp;
		}
		n = n / 10;
	}

	cout << sumOdd * sumEven << endl;
	return 0;
}
