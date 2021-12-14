//   1.  Sum the even integers between (and including) 2 and 50 and print result to screen. 
//   2.  Have user give you a series of numbers, one at a time.Tell the user to enter - 999 when they are done entering numbers.
//       As they enter a number, print out only those that are multiples of 5.  
//       Keep track of how many multiples of 5 you print.Tell user at the end.
//   3.  Use a for loop that prints out the following values :
//   66  51  36  21  6 - 9
//   4.  Write a program that allows the user to input a series of only 3 numbers and determines and displays the maximum and minimum of the numbers and prints those out at the end.
#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sum, r, input;

	cout << "\nHello, please enter the first number";
	cin >> input;

	while (input != 999)
	{
		cout << "\n\nPlease enter another number... ";
		cin >> input;
		if (input % 5 == 0)
			sum++;
	}

	cout << "\nYou have " << sum << " multiples of 5!!\n\n";
}