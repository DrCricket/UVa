package UVa;

import java.util.Scanner;

public class UV_11496 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int i = in.nextInt();
		while(i != 0)
		{
			int[] array = new int[i];
			for(int k=0;k<i;k++)
			{
				array[k] = in.nextInt();
			}
			int peaks = 0;
			if(i == 1)
			{
				peaks = 1;
			}
			else
			{
				for(int j=0;j<i;j++)
				{
					if(j == 0)
					{
						if((array[j] > array[i-1] && array[j+1] < array[j]) || (array[j] < array[i-1] && array[j+1] > array[j]))
						{
							peaks++;
						}
					}
					else if(j == i-1)
					{
						if((array[j] > array[0] && array[j-1] < array[j]) || (array[j] < array[j-1] && array[0] > array[j]))
						{
							peaks++;
						}
					}
					else 
					{
						if((array[j] > array[j-1] && array[j+1] < array[j]) || (array[j] < array[j-1] && array[j+1] > array[j]))
						{
							peaks++;
						}
					}
				}
			}
			System.out.println(peaks);
			
			i = in.nextInt();
		}
	}

}
