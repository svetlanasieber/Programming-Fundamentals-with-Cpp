// 05.CartesianProduct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned& arrSize) {

	cin >> arrSize;

	if (arrSize > maxSize)
		return false;

	for (int i = 0; i < arrSize; i++)
		cin >> arr[i];

	return true;
}

int main()
{
	unsigned arrSize;
	int arr[maxSize];

	if (getArray(arr, arrSize) == false)
		return -1;

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{
			cout << arr[i] * arr[j] << " ";

		}
	}
	cout << endl;

	return 0;
}
