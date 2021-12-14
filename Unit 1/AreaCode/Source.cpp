#include <iostream>
using namespace std;

int main()
{
	int phoneNumber[10] = { 7, 1, 7, 5, 7, 5, 7, 6, 4, 1 };

	if (phoneNumber[0] == 7 && phoneNumber[1] == 1 && phoneNumber[2] == 7)
	{
		cout << "Your number is local!\n";
	}
	else
	{
		cout << "Not local!";
	}
}