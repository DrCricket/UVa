package UVa;

import java.util.Scanner;

public class UV_0299 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int i = Integer.parseInt(in.nextLine());
		while(i!=0)
		{
			int n = in.nextInt();
			int[] array = new int[n];
			for(int j=0;j<n;j++)
			{
				array[j] = in.nextInt();
			}
			int ans=0;
			for(int x=0;x<array.length;x++)
			{
				for(int y=x+1;y<array.length;y++)
				{
					if(array[x] > array[y])
					{
						int temp = array[x];
						array[x] = array[y];
						array[y] = temp;
						ans++;
					}
				}
			}
			System.out.println("Optimal train swapping takes "+ans+" swaps.");
			i--;
		}
	}

}
