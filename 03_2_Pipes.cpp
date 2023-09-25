// 03.Pipes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void lineToVector(istringstream stream, vector<int>& vec)
{
	int temp;
	while (stream >> temp)
	{
		vec.push_back(temp);
	}
}

int main()
{
	int n;
	cin >> n;


	string checkupLine;
	getline(cin>>ws, checkupLine);

	string instalationLine;
	getline(cin, instalationLine);

	vector<int> checkup;
	lineToVector(istringstream(checkupLine), checkup);

	vector<int> installation;
	lineToVector(istringstream(instalationLine), installation);

	vector<int>::iterator it1 = installation.begin();
	vector<int>::iterator it2 = checkup.begin();

	ostringstream output;

	while (it1!=installation.end() && it2!= checkup.end())
	{
		output << *it1 / (*it1 - *it2) << " ";
		it1++;
		it2++;
	}

	cout << output.str() << endl;
	return 0;
}
