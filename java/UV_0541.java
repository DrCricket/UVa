package UVa;

import java.util.Scanner;

public class UV_0541 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int[][] array;
		int n= in.nextInt();
		while(n != 0)
		{
			array = new int[n][n];
			int[] row = new int[n];
			int[] column = new int[n];
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
				{
					array[j][k] = in.nextInt();
					row[j] +=array[j][k];
					column[k] = column[k] + array[j][k];
				}
			}
			int error_r=0;
			int error_c=0;
			int col_=0;
			int row_=0;
			for(int x=0;x<n;x++)
			{
				if(row[x]%2 != 0)
				{
					error_r++;
					row_=x;
				}
				if(column[x]%2 != 0)
				{
					error_c++;
					col_=x;
				}
			}
			
			if(error_c == error_r && error_c == 1)
			{
				System.out.println("Change bit ("+(row_+1)+","+(col_+1)+")");
			}
			else if(error_c == 0 && error_r ==0)
			{
				System.out.println("OK");
			}
			else
			{
				System.out.println("Corrupt");
			}
			n = in.nextInt();
		}
		

	}

}
