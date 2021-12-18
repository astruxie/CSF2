import java.util.Random;

public class Coin 			//this coin class cannot be executed without a driver class
{
	//instance variables; these will be different for each instance of the class, e.g. coin1, coin2
	private final int HEADS = 0;
	private final int TAILS = 1;

	private int face;

	public Coin ()		//constructor: same name as class; no return type
	{
		flip();
	}

	public void flip ()		//void return type
	{
		face = (int) (Math.random() * 2);
	}

	public boolean isHeads ()		//Boolean return type; must have “return” inside and return Boolean type
	{
		return (face == HEADS);
	}

	public String toString ()		//Return string type; returns string representation of object to SOP in main
	{
		String faceName;

		if (face == HEADS)
			faceName = "Heads";
		else
			faceName = "Tails";

		return faceName;
	}
}
