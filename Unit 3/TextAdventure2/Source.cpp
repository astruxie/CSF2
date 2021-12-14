#include <iostream>
using namespace std;
#include <time.h>

//     P R O T O T Y P E S
void nameGen(char name[15], char newName[50]);


/////////////////////////////////     MAIN     ////////////////////////////////////////////////////////
int main()
{
	char name[15] = " ";
	char newName[50] = " ";
	char player[50] = " ";
	cout << "\n\tHello, what is your name? ";
	cin >> name;
	nameGen(name, newName);
	
	
}
////////////////////////////////    END MAIN     /////////////////////////////////////////////////////
void nameGen(char name[15], char newName[50])
{
	cout << "\n\tThat's a nice name... " << name << " But for this adventure you need a better one!";
	int randomNum = 0;
	int randomNum2 = 0;
	int choice;

	do
	{
		srand(time(0));

		randomNum = (rand() % 10) + 1;

		/////// NAME GENERATOR
		char merName1[50] = "Blue Reef Feeder";
		char merName2[50] = "Oyster Cape Long Tail";
		char merName3[50] = "Adamaris the FishBoy";
		char merName4[50] = "Pearl Gold-Bubbles";
		char merName5[50] = "Nixie Noble-Tail";
		char merName6[50] = "Harmony SeaSalt";
		char merName7[50] = "Delphina Dream-Tide";
		char merName8[50] = "Aquata Clamfish";
		char merName9[50] = "Serena Glimmer-Tail";
		char merName10[50] = "Rebecca Catfish";

		if (randomNum == 1)
			strcpy(newName, merName1);
		if (randomNum == 2)
			strcpy(newName, merName2);
		if (randomNum == 3)
			strcpy(newName, merName3);
		if (randomNum == 4)
			strcpy(newName, merName4);
		if (randomNum == 5)
			strcpy(newName, merName5);
		if (randomNum == 6)
			strcpy(newName, merName6);
		if (randomNum == 7)
			strcpy(newName, merName7);
		if (randomNum == 8)
			strcpy(newName, merName8);
		if (randomNum == 9)
			strcpy(newName, merName9);
		if (randomNum == 10)
			strcpy(newName, merName10);
		cout << "\n\tYour new name is... " << newName << "! \nDo you like this name?";
		cout << "\n\tPress 1 to keep your name and 2 for another one!   ";
		cin >> choice;

		if (choice == 1)
			cout << "\nGood choice, the Sea Gods are smiling\n";
		else
			cout << "You will regret this decision... The Sea Gods do not like this...\n ";
	} while (choice == 2);
	

}
