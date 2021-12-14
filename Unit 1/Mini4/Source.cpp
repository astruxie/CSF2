#include <iostream>
using namespace std;

int main()
{
	int ageArray[12] = {17, 15, 15, 18, 17, 16, 15, 15, 17, 17, 18, 16,};
	int max = 25;
	int min = 10;
	//min 15
	//max 18

	for (int index = 0; index >=11; index++)
	{
		ageArray[index] = index + 1;

		if (max <= ageArray[12])
		{
			(max = ageArray[12]);
		}

		if (min > ageArray[12])
		{
			(min = ageArray[12]);
		}
		cout << "The minimum age is " << min << ". The maximum age is " << max << "! \n\n";
	}

}