// 01.CompareArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void readArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

bool areEqual(int arr1[], int n, int arr2[], int m)
{
	if (n != m)
		return false;
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != arr2[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{

	int n;
	cin >> n;
	int arr1[100];
	readArray(arr1, n);

	int m;
	cin >> m;
	int arr2[100];
	readArray(arr2, m);

	if (areEqual(arr1, n, arr2, m))
		cout << "equal" << endl;
	else
		cout << "Not equal" << endl;
	
	return 0;
}
