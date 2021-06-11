// largest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int myarr[5] = { 1, 18, 12, 97, 45 };
	int arrSize = sizeof(myarr[0]);


	//sorting
	//get var a and b(
	int smaller = 0;
	int larger = 0;

	for (int i = 0; i <= arrSize; i++)
	{
		smaller = myarr[i - 1];
		if (myarr[i] < smaller)
		{
			larger = smaller;
			smaller = myarr[i];

			myarr[i] = larger;
			myarr[i - 1] = smaller;

		}
	}

	for (int i = 0; i <= arrSize; i++)
	{
		std::cout << myarr[i] << " ";
	}

}


