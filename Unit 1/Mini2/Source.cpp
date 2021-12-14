#include <iostream>
using namespace std;

int main()
{
	//variables
	int numArray[10000];

	//fill it up
	for (int i = 0; i <= 9999; i++)
	{
		numArray[i] = i;
	}

	//print to screen
	for (int i = 0; i <= 9999; i++)
	{
		cout << numArray[i] << "\n";
	}

}