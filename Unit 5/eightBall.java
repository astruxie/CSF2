import java.util.*;
public class eightBall
{
	public static void main (String[] args)
	{
		int answer;
		int x;
		String[] eightBall = new String[21];
		eightBall[0] = "It is certain";
		eightBall[1] = "It is decidedly so";
		eightBall[2] = "Without a doubt";
		eightBall[3] = " Yes definitely";
		eightBall[4] = "You may rely on it";
		eightBall[5] = "As I see it, yes";
		eightBall[6] = " Most likely";
		eightBall[7] = "Outlook good";
		eightBall[8] = "Yes";
		eightBall[9] = "Signs point to yes";
		eightBall[10] = "Reply hazy try again";
		eightBall[12] = "Ask again later";
		eightBall[13] = " Better not tell you now";
		eightBall[14] = "Cannot predict now";
		eightBall[15] = "Concentrate and ask again";
		eightBall[16] = "Don't count on it";
		eightBall[17] = "My reply is no";
		eightBall[18] = "My sources say no";
		eightBall[19] = "Outlook not so good";
		eightBall[20] = "Very doubtful";

		//new scanner
		Scanner reader = new Scanner (System.in);
		System.out.println ("Hello! Welcome to the Magic 8Ball!");
		System.out.println ("Press '1' to shake the ball!");
		answer = reader.nextInt();

		//generate number
		Random myGenerator = new Random();


		while (answer == 1)
		{
			x = myGenerator.nextInt(20);
			System.out.println (eightBall[x]);
			System.out.println ("Press 1 to try again!");
		}


	}
}
