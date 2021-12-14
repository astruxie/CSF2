#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int age;

	//get that info girl
	cout << "Hello______!\n\n";
	cout << "Your age is:\n";
	cout << "1.) 5-18\n";
	cout << "2.) 19-30\n";
	cout << "3.) 30+\n\n ";
	cin >> age;

	switch (age)
	{
	case 1:
		cout << "Wow, you are young!\n";
		break;

	case 2:
		cout << "Wass up, you're an adult!!\n";
		break;

	case 3:
		cout << "YOU ARE SO OLD AAAAAAHHAHHAA\n";
		break;
	}
}

