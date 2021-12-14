/*In the main function of a program, ask the user to choose their favorite sports team from a numbered list, e.g.  

1.  Philadelphia Flyers
2.  Washington Capitals
3.  Colorado Avalanche
4.  Pittsburgh Penguins

Use a switch statement to handle their choice.  If they choose YOUR favorite team, call a function called printGreeting1.  For others, call function called printGreeting2.  

For these greetings functions, you can print out whatever you'd like to the screen.  
Note that these are basic functions that don't return any values and don't have any parameters.  
See "displayGreeting" example in notes.*/
#include <iostream>
using namespace std;

//prototypes
void displayGreeting1();
void displayGreeting2();

int main()
{
	int choice;
	cout << "Choose your favorite team:   \n";
	cout << "1. Philadelphia Flyers\n";
	cout << "2. Washington Capitals\n";
	cout << "3. Colorado Avalanche\n";
	cout << "4. Pittsburgh Penguins\n";

	cin >> choice;

	switch (choice)
	{
	case 1: displayGreeting1(); break;
	case 2: displayGreeting1(); break;
	case 3: displayGreeting1(); break;
	case 4: displayGreeting2(); break;
	}
} //END MAIN

void displayGreeting1()
{
	cout << "Bad taste in hockey teams!\n";
}

void displayGreeting2()
{
	cout << "My fav team too!\n";
}