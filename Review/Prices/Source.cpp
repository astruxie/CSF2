// HOW TO SET A MIN!!!!!!!
//if (input < min)
//min = input

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	float price;
	float min = 9999;

	//ask user for info
	cout << "Hello!\n Please enter the price. Type 0 to calculate the total!  ";
	cin >> price;

	if (price < min)
	{
		min = price;
	}

	while (price > 0)
	{
		cout << "What is the next price?  ";
		cin >> price; 

		if (price < min && price != 0)
		{
			min = price;
		}
	}
	cout << "The smallest price is... " << min << "!! \n\n";
}