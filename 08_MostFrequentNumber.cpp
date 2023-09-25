// 04.MostFrequentNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int maxSize = 200;
	int n;
	cin >> n;

	int arr[maxSize];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int counterArr[10] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < n; i++)
	{
		*(counterArr+arr[i])+= 1;
	}

	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (counterArr[i] > max)
			max = counterArr[i];
	}

	for (int i  = 0;  i< 10; i++)
	{
		if (counterArr[i] == max)
			cout << i << " ";
	}
	cout << endl;
	return 0;
}
