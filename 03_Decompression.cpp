// 02.Decompression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{

	string input;
	cin >> input;

	ostringstream resultStream;
	int counter = 1;
	bool isMultiplier = false;
	for (char symbol : input)
	{
		if (symbol >= 'a' && symbol <= 'z')
		{
			resultStream << string(counter, symbol);
			isMultiplier = false;
			counter = 1;
		}
		else if (isdigit(symbol))
		{
			int digit = int(symbol - '0');
			if (!isMultiplier)
			{
				counter = digit;
			}
			else
			{
				counter = counter * 10 + digit;
			}

			isMultiplier = true;
		}
	}

	cout << resultStream.str() << endl;

	return 0;
}
