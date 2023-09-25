// 01.Unused.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string input;
	cin >> input;

	bool alphabet[26] = { false };

	for (size_t i = 0; i < input.size(); i++)
	{
		alphabet[input[i] - 'a'] = true;
	}

	for (size_t i = 0; i < 26; i++)
	{
		if (!alphabet[i])
		{
			cout << char('a' + i);
		}
	}
	cout << endl;
	return 0;
}
