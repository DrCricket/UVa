package UVa;

import java.util.Scanner;

public class UV_11661 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int i = Integer.parseInt(in.nextLine());
		while(i != 0)
		{
			char[] array = in.nextLine().toCharArray();
			i = 0;
			int rest = Integer.MAX_VALUE;
			int hosp = Integer.MAX_VALUE;
			int diff = Integer.MAX_VALUE;
			while(i != array.length)
			{
				if(array[i] == 'Z')
				{	
					diff = 0;
					break;
				}
				if(array[i] == 'R')
				{
					rest = i;
					if(Math.abs(rest-hosp) < diff)
					{
						diff = Math.abs(rest-hosp);
					}
				}
				if(array[i] == 'D')
				{
					hosp = i;
					if(Math.abs(rest-hosp) < diff)
					{
						diff = Math.abs(rest-hosp);
					}
				}
				i++;
			}
			System.out.println(diff);
			i = Integer.parseInt(in.nextLine());
		}
		

	}

}
