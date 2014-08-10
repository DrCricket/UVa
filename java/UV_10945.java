package UVa;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class UV_10945 {

	public static void main(String args[])
	{
		List<Character> array = new ArrayList<Character>();
		Scanner in = new Scanner(System.in);
		
		String input = in.nextLine();
		while(!input.equals("DONE"))
		{
			input = input.replaceAll("\\s+", "");
			input = input.replace("?", "").replace(",", "").replace("!","").replace(".","").toLowerCase();
			if(input.equals(new StringBuilder(input).reverse().toString()))
			{
				System.out.println("You won't be eaten!");
			}
			else
			{
				System.out.println("Uh oh..");
			}
			input = in.nextLine();
		}
	}
}
