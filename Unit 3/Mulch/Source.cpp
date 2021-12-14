#include <iostream>
using namespace std;


int main()
{
	//declare variables
	int gardenArea[6];
	int num, sum;
	int scoopsneeded, cost;

	for (int x = 0; x <= 4; x++)
	{
		cout << "Enter the area of the garden.";
		cin >> num;
		sum = sum + num;
	}
	cout << sum;
}

/////////////////////////
