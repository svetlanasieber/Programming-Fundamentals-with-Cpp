// 02.Brackets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

int IsAllowed(char bracket, char nextBracket)
{
	if (bracket == '-')
	{
		if (nextBracket == '(' || nextBracket == '[' || nextBracket == '{')
		{
			return 1;
		}
		else
			return -1;
	}
	//  ( --> (,)
//  [ --> [, ], (
//  { --> {, }, [, (

	int isAllowed = -1;
	switch (bracket)
	{
	case '(':
		switch (nextBracket)
		{
		case '(':
			isAllowed = 1;
			break;
		case')':
			isAllowed = 0;
			break;
		}
		break;
	case '[':
		switch (nextBracket)
		{
		case '(':
			isAllowed = 1;
			break;
		case'[':
			isAllowed = 1;
			break;
		case']':
			isAllowed = 0;
			break;
		}
		break;
	case '{':
		switch (nextBracket)
		{
		case '(':
			isAllowed = 1;
			break;
		case'[':
			isAllowed = 1;
			break;
		case'{':
			isAllowed = 1;
			break;
		case'}':
			isAllowed = 0;
			break;
		}
		break;
	}
	return isAllowed;
}

int main()
{
	string input;
	cin >> input;
	string result = "valid";

	vector<char> line;
	vector<char>::iterator it;

	line.push_back('-');
	it = line.begin();
	for (int i = 0; i < input.length(); i++)
	{
		int isAllowed = IsAllowed(*it, input[i]);
		if (isAllowed > 0)
		{
			line.push_back(input[i]);
			it = line.end();
			it--;
		}
		else if (isAllowed < 0)
		{
			result = "invalid";
			break;
		}
		else {
			it--;
			line.erase(--line.end());
		}
	}

	if (it != line.begin())
		result = "invalid";

	cout << result << endl;

	return 0;
}
