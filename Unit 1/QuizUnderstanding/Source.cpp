#include <iostream>
using namespace std;

int main()
{
	//declare variables
	char name[30] = "Jo";
	int length = strlen(name);

	//loop
	for (int x = 0; x <= length; x++)
		cout << name[x] << "   ";


}