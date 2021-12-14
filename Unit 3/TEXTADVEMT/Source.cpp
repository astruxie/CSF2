#include <iostream>
using namespace std;
#include <time.h>

//     P R O T O T Y P E S
void nameGen(char name[15], char newName[50]);
int seaStar(int &karma);
void light();
int town(int &karma);

/////////////////////////////////     MAIN     ////////////////////////////////////////////////////////
int main()
{
	char name[15] = " ";
	char newName[50] = " ";
	char player[50] = " ";
	int karma = 0;
	cout << "\n\tHello, what is your name? ";
	cin >> name;
	nameGen(name, newName);
	karma = seaStar(karma);
	light;
}
////////////////////////////////    END MAIN     /////////////////////////////////////////////////////
void nameGen(char name[15], char newName[50])
{
	cout << "\n\tThat's a nice name... " << name << " But for this adventure you need a better one!\n";
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
		cout << "\n\tYour new name is... " << newName << "! \n\tDo you like this name?\n";
		cout << "\n\tPress 1 to keep your name and 2 for another one!   ";
		cin >> choice;
		system("cls");

		if (choice == 1)
			cout << "\nGood choice, the Sea Gods are smiling\n";
		else
			cout << "You will regret this decision... The Sea Gods do not like this...\n You should learn manners.\n ";
	} while (choice == 2);
}
	//////////////////////////////////////////////////////////////////////
int seaStar(int &karma)
	{
		int choice;
		cout << "\n\tYou swim around, now a beautiful mermaid. A magical octopus approaches you. \n\t ";
		cout << "'Please help me!' he says.";
		cout << "\n\tHe seems to be missing a leg!";
		cout << "\n\n\t What do you do?";

		cout << "\n\t\t 1.) Pretend to not hear his cries ";
		cout << "\n\t\t 2.) Agree to help ";
		cout << "\n\t\t 3.) Tell him to go away ";
		cin >> choice;
		system("cls");

			switch (choice)
			{
			case 1:
				cout << "\n\n\tWow! How rude! The magical creature gives up and swims away, muttering under his breath.";
				karma++;	
				break;
			case 2:
				cout << "\n\n\tYes! The octopus is very greatful... You stitched his leg back on neatly. He swims away happily.";
				break;
			case 3:
				cout << "\n\n\t\"Leave me alone! Stupid fish!\"";
				cout << "\n\n\tBad choice... This octopus will not forget your rudeness...";
				(karma = karma + 2);
				return karma;
			}

		}
		//////////////////////////////////////////////////////////////////////////////////////
void light()
{
	cout << "\n\n\tTime passes and you begin to get bored. \n\tA light shines brightly above your head in the water. ";
	cout << "\n\t\"I wonder where that light is coming from...\" you say to yourself.";
	cout << "\n\tWhat do you do?";
	cout << "\n\t\t1.) Swim towards the light ";
	cout << "\n\t\t2.) There's nothing up there that interests me...";
	cin >> choice;
	system("cls");

	switch (choice)
	{
		case 1:
		cout << "\n\n\tGah!! You swim to the light only to be burned by the sun! \n\tYou Died\n\n";
		return 0;
		break;
		cout << "\n\n\tThat light doesnt mean anything to you. You ignore it.\n";
		break;

	}

	      
}
int town(int &karma)
{
	int choice, choice2;
	cout << "\n\n\tAs you are swimming, you approach a sign...";
	cout << "\n\n\n\t\t\"TOWN 3KM =========>\n\t\t<========= SEAWEED FEILDS 7KM\"\n";
	cout << "\n\tYou dont have much energy left. Where do you decide to go?";
	cout << "\n\t\t1.) Town";
	cout << "\n\t\t2.) Seaweed Feilds";
	cin >> choice;
	system("cls");

	switch (choice)
	{
		case 1:
			cout << "\n\n\tYou swim to town. The journy does not take much time.";
			cout << "\n\tThere are many merchants lining the streets. You approach one ";
			cout << "\n\n\t\t1.) \"Hey, where am I? I used to have legs... Do you know what's going on!?\"";
			cout << "\n\t\t2.) \"What do you have for sale? I'm interested in buying.\"";
			cin >> choice2;
			system("cls");

			switch (choice2)
			{
				case 1: /////////////////////////////11111111111111111111111
					if (karma == 1)
					{
						cout << "\n\n\tThe seller narrows his eyes at you. Somehow he can tell you are not a good person.";
						cout << "\n\n\tHe looks away, ignoring you and counting his money. He's just pretending to be busy. \n\tThe nerve of some people...";

					}
					if (karma == 2)
					{
						cout << "\n\n\tThe seller narrows his eyes at you. Somehow he can tell you are not a good person.";
						cout << "\n\t\"Get away from my shop! I'm not interested in talking to an outsider!\"";
						cout << "\n\tWhen you hesitate to leave he reaches for a broom and you immediately swim away. \n\tWhat a jerk...";
					}
					else 
					{
						cout << "\n\n\tThe merchant narrows his eyes at you. He stares into your eyes as if to read your thoughts."
						cout << "\n\t\"Sorry? I do not understand... I would love to help a lovely person like yourself but I do not understand what you are saying.\"";

					}
						break;

				case 2: ///////2222222222222222222222222222222222222222222222
					if (karma == 1)
					{
						cout << "\n\n\tThe seller narrows his eyes at you. Somehow he can tell you are not a good person.";
						cout << "\n\n\tHe looks away, ignoring you and counting his money. He's just pretending to be busy. \n\tThe nerve of some people...";

					}
					if (karma == 2)
					{
						cout << "\n\n\tThe seller narrows his eyes at you. Somehow he can tell you are not a good person.";
						cout << "\n\t\"Get away from my shop! I'm not interested in talking to an outsider!\"";
						cout << "\n\tWhen you hesitate to leave he reaches for a broom and you immediately swim away. \n\tWhat a jerk...";
					}
					else
					{
						cout << "\n\n\tThe merchant narrows his eyes at you. He stares into your eyes as if to read your thoughts.";
						cout << "\n\t\"Of course! Here are my prices...\"";
						cout << "\n\tSadly, everything he sold was far too pricy. You swim away from his stand";
					}
						break;		
			}
		case 2:
			cout << "\n\n\t"

	}
}
