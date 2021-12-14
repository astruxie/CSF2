#include <iostream>
using namespace std;
#include <time.h>

//prototypes
void snowPred();
int ageAdvi(int a);
int fahCels(float f);
void ckIfEven(int n1, int n2);


int main()
{
	int choice;
	int fer;

	cout << "What function would you like to use?\n";
	cout << "1.  Snow Predictor\n";
	cout << "2.  Age Advisor\n";
	cout << "3.  Fahrenheit to Celsius Converter\n";

	cin >> choice;

	switch (choice)
	{
	case 1: snowPred(); break;
	case 2:
	{
		int age;
		cout << "What is your age?";
		cin >> age;
		age = ageAdvi(age);
		break;
	}
	case 3:
		cout << "What is the temperature\n";
		cin >> fer;

		f = fahCels(fer); 
		break;
	}

} //END MAIN
void snowPred()
{
	int snowIn = 0;
	snowIn = (rand() % 10) + 1;
	cout << "There will be " << snowIn << "in of snow!\n\n";
}
int ageAdvi(int a)
{
	if (a > 18)
		cout << "\nYou're old!\n";
	else
		cout << "\nYou're young!\n";

}
int fahCels(float f)
{

}
void ckIfEven(int n1, int n2)
{
	if (n1 % 2 == 0)
		cout << "Your number is even";
}
