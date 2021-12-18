//Code a program that stores the expected high temperatures for the next 5 days in an array.
//(Use weather.com to get data.)
//Then use a for loop to calculate the average, max and min of those temperatures.
//Print them to the screen.

public class Mini1
{
public static void main (String[] args )
{
	int[] temps = {67, 51, 63, 70, 82};
	for (int max = 0, min = 0; i < temps.length; i++)
	{
		if (i ==0)
		{
			min = temps[i];
			max = temps[i];
		}
		sum = sum + temps[i];
		if (temps[i] < min)
		min = temps[i];

		if (temps[i] > max)
		max = temps[i];

	}

	average = (double) sum/temps.length;

	System.out.println ("Average: " + average);
	System.out.println ("Min: " + min + "Max: " + max);
}
}