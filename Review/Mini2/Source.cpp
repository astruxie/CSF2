#include <iostream>
using namespace std; //I AM SO CONFUSED PLEASE HELP

int main()

{
	//declare variables
	int count, sum, finsum, average, evodd;

	//loop
	while (count != 5)
	{
		cout << "Please enter a number\n\n";
		cin >> sum;
		finsum = finsum + sum;
		count++;
	}
	(average = finsum / 5);
	cout << "The average is " << average << "!!\n";
	(evodd = finsum % 2);

	if (evodd == 0)
	{
		cout << "Your average is even!!\n\n";
	}
	else
	{
		cout << "Your number is odd!!\n\n";
	}


}