package UVa;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class UV_11349 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int i=Integer.parseInt(in.nextLine());
		int[][] array ;
		int[][] trans ;
		int counter = 1;
		while(counter <= i)
		{
			String str = in.nextLine();
			int n = Integer.parseInt(Character.toString(str.charAt(4)));
			array = new int[n][n];
			trans = new int[n][n];
			for(int x=0;x<n;x++)
			{
				for(int y=0;y<n;y++)
				{
					array[x][y] = in.nextInt();
					trans[y][x] = array[x][y];
				}
			}
			
			if(Arrays.deepEquals(trans,array))
			{
				System.out.println("Test #"+counter+": Symmetric.");
			}
			else
			{
				System.out.println("Test #"+counter+": Non-symmetric.");
			}
			counter++;
		}

	}

}
