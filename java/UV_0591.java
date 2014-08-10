package UVa;

import java.util.Scanner;

public class UV_0591 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int i = Integer.parseInt(in.nextLine());
		int count=1;
		while(i != 0)
		{
			int[] array = new int[i];
			int sum=0;
			for(int j=0;j<i;j++)
			{
				array[j] = in.nextInt();
				sum+=array[j];
			}
			sum/=i;
			int less=0;
			for(int j=0;j<i;j++)
			{
				if(array[j] < sum)
				{
					less = less + (sum-array[j]);
				}
			}
			System.out.println("Set #"+count);
			System.out.println("The minimum number of moves is "+less+".");
			System.out.println();
			i = in.nextInt();
			count++;
		}
		
	}

}
