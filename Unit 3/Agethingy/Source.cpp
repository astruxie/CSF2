/*Write a program that contains one function called calcAge.  
In the main function, ask the user for the year he/she was born and then "pass" the year to the calcAge function 
which will calculate the user’s age and RETURN it to the main.  

Remember to "catch" the return value of the calcAge function.  
See examples in your notes.  Which one is most like this project?*/


#include <iostream>
using namespace std;

//prototypes
int calcAge(int y);

int main()
{
	int year, age;
	cout << "What year were you born?";
	cin >> year;

	age = calcAge (year);

	cout << "You are " << age << " years old\n\n";

}
int calcAge (int y)
{
	int age;
	age = 2018 - y;
	return age;
}