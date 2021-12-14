#include <iostream>
using namespace std;
#include <time.h>

int main()
{
	//declare variables
	int randomNum = 0;
	srand(time(0));
	int answer, num1, num2, num3, num4, num5;

	//ask user
	cout << "Would you like to generate PowerBall numbers?\n\n\n 1 = Yes\n 2 = No\t";
	cin >> answer;

	while (answer == 1)
	{
		num1 = (rand() % 35) + 1;
		num2 = (rand() % 35) + 1;
		num3 = (rand() % 35) + 1;
		num4 = (rand() % 35) + 1;
		num5 = (rand() % 35) + 1;

		cout << "Your numbers are: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << " and " << num5 << " ...!\n\n";
		cout << "Would you like to generate more?\n";
		cin >> answer;

	}

}