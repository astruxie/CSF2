#include <iostream>
using namespace std;

int main()
{
	//variables
	char name[25] = " ";
	char myname[25] = "Sam";

	cout << "What is your last name?\n\n";
	cin >> name;

	if (strcmp(name, myname) == 0)
		cout << "Our names match!!\n\n";
	else
		cout << "The names do not match!!\n\n";



}