// 03.DiffChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

char myToUpper(char sym)
{
	if (sym>='a' && sym<='z')
	{
		return sym - 'a' + 'A';
	}
	return sym;
}
int main()
{
	int n;
	cin >> n;
	string firstLine, secondLine;
	getline(cin>>ws, firstLine);
	getline(cin, secondLine);
	ostringstream resultStream;
	int counter = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (firstLine[i]==secondLine[i])
		{
			resultStream << firstLine[i];
		}
		else if (myToUpper(firstLine[i]) == myToUpper(secondLine[i]))
		{
			resultStream << myToUpper(firstLine[i]);
		}
		else
		{
			resultStream << '!';
			counter++;
		}
	}
	cout << resultStream.str() << endl;
	cout << counter << endl;

	return 0;
}
