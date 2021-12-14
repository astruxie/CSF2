#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int age;
	ifstream famFile("fam.txt");

	if (famFile.is_open())
	{
		while (famFile.good())
		{
			famFile >> age;
			cout << age << '\n';
		}
	
		famFile.close();
	}
	else
	{
		cout << "\nFile cannot be opened\n";
	}
}
