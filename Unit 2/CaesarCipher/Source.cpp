//Sam Noggle 
//Period 6
// 2/23/18
//encrypts the contents of a text file using the shifting algorithm idea of the Caesar Cipher.
//This is my own work with lots of help at the end by you! SJN
//I got super close to finishing it myself but I tried using a for loop just to see what would happen and it actually 
// somehow worked? I found out later I didnt need it but I spent a long time changing my ifs and elses trying to make 
// it work. At first the loop wouldnt stop printing infinite spaces but I eventually (not sure how) got my encrypted
// message to appear!!!
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char letter;
	int shiftAmount;

	ifstream cipherFile("cipher.txt");
	cipherFile >> std::noskipws;

	cout << "\n\nPlease enter the amount wou would like to shift... \n";
	cin >> shiftAmount;

	if (cipherFile.is_open())
	{
		while (cipherFile.good())
		{
			cipherFile >> letter;

			if (letter == 32) //space
			{
				cout << letter;
			}
			else
			{
				letter = letter + shiftAmount;

				while (letter > 90)
					letter = letter - 26;

				cout << letter;
			}
				
		}

		cipherFile.close();
	}//end if
	else
	{
		cout << "\nFile cannot be opened\n";
	}

}