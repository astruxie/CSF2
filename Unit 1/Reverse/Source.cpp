#include <iostream>
using namespace std;

int main()
{
	//variables
	char name[25];
	int length;

	//get info from user
	cout << "What is your name? ";
	cin >> name;

	length = strlen(name);

	//print each letter in order
	for (int index = 0; index < length; index++)
		cout << name[index] << "\n";

	//print each letter in reverse
	for (int index = length - 1; index >= 0; index--)
		cout << name[index];
	cout << "\n\n";

}