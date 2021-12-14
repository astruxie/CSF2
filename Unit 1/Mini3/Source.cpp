#include <iostream>
using namespace std;

int main()
{
	int numArray[100];

	//fill up
	for (int i = 1; i <= 100; i++)
	{
		numArray[i] = i;
	}

	//print
	for (int i = 1; i <= 100; i++)
	{
		cout << numArray[i] << "\n";
	}
}