// 04.Bus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int busArrivals[20];
	int temp;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		int h = temp / 100;
		int m = temp % 100;

		busArrivals[i] = h * 60 + m;
	}

	int depTime;
	cin >> depTime;

	int h = depTime / 100;
	int m = depTime % 100;
	depTime = h * 60 + m;
	int min = INT32_MAX;
	int index = -1;
	
	for (int i = 0; i < n; i++)
	{
		int wait = depTime - busArrivals[i];
		if (wait < 0)
			wait += 24 * 60;
		if (wait<min)
		{
			min = wait;
			index = i + 1;
		}
	}

	cout << index << endl;
	return 0;
}
