//Sam Noggle 1/12/2018
//Period 6
//Program to generate 10,000 numbers and check if the user input was found in them
//This is my ow work SJN

#include <iostream>
using namespace std;
#include <time.h>

int main()
{
	//Declare an array of 1000 ints called "myArray", 
	int myArray[10000];
	//an int variable called "found" (initialize to 0) 
	int found = 0;
	//and an int variable called "target."
	int target;
	//random number
	int randomNum = 0;
	srand(time(0));

	//Use a for loop and initialize your 1000-element array 
	//with random numbers in the range from 1 to 10000 (ten thousand!). 
	for (int index = 0; index <= 9999; index++)
	{
		randomNum = (rand() % 10000) + 1;
		myArray[index] = randomNum;
	}

		//Ask the user for a target search value in range from 1 to 10,000 and 
		//store in "target."
		cout << "\tPlease enter a target search value in range from 1 to 10,000\t";
		cin >> target;

	//Use a for loop with an if statement statement inside to search array 
	//to see if "target" is an element in the array. 
	//If target value is found, change found variable to 1 and break from loop.
		for (int index = 0; index <= 9999; index++)
		{

			if (found == 0 && target == myArray[index])
			{
				found++;
			}
		}

	//Use an if statement to print to screen whether or not the search value 
	//was found.
		if (found == 1)
			cout << "\nThe value was found!\n";
		else
			cout << "\nSorry, it was not found...\n";
}