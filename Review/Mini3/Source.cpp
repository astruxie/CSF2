#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int age = 16;
	int guess;

	//ask info
	cout << "What is my age?   ";
	cin >> guess;

	while (guess != age)
	{
		cout << "\n\nWrong! Guess again!!   ";
		cin >> guess;
	}
	while (guess == age)
	{
		cout << "\n\nNice job! Correct!\n\n";
		break;
	}

}