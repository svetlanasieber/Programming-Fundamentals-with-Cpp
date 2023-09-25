// 04.PrintNameOfNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string NumToName(int num)
{
	string result = "";
	switch (num)
	{
	case 1: result = "one"; break;
	case 2: result = "two"; break;
	case 3: result = "three"; break;
	case 4: result = "four"; break;
	case 5: result = "five"; break;
	case 6: result = "six"; break;
	case 7: result = "seven"; break;
	case 8: result = "eight"; break;
	case 9: result = "nine"; break;
	case 10:result = "ten"; break;
	case 11:result = "eleven"; break;
	case 12:result = "twelve"; break;
	case 13:result = "thirteen"; break;
	case 14:result = "fourteen"; break;
	case 15:result = "fifteen"; break;
	case 16:result = "sixteen"; break;
	case 17:result = "seventeen"; break;
	case 18:result = "eighteen"; break;
	case 19:result = "nineteen"; break;
	}
	return result;
}

void PrintNameOfNumber(int n) {
	short thousands = 0, hundreds = 0, decs = 0, units = 0;

	units = n % 10;

	n = n / 10;
	if (n > 0)
	{
		decs = n % 10;
		n = n / 10;
	}
	if (n > 0)
	{
		hundreds = n % 10;
		n = n / 10;
	}
	if (n > 0)
	{
		thousands = n % 10;
	}

	if (thousands > 0)
		cout << NumToName(thousands) << " thousand ";
	if (hundreds > 0)
		cout << NumToName(hundreds) << " hundred ";
	switch (decs)
	{
	case 2: cout << "twenty "; break;
	case 3: cout << "thirty ";			break;
	case 4: cout << "fourty ";			break;
	case 5: cout << "fifty ";			break;
	case 6: cout << "sixty ";			break;
	case 7: cout << "seventy ";			break;
	case 8: cout << "eighty ";			break;
	case 9: cout << "ninety ";			break;
	}

	if (decs == 1)
	{
		units = units + decs * 10;
	}

	cout << NumToName(units) << endl;



}

int main()
{
	int n;
	cin >> n;
	if (n==0)
	{
		cout << "zero" << endl;
		return 0;
	}
	PrintNameOfNumber(n);
	return 0;
}

