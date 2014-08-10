package UVa;

import java.util.Arrays;
import java.util.Scanner;

public class UV_11588 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		int n=0;
		while(n !=t)
		{
			n++;
			int t1,t2,t3,t4;
			t1 = in.nextInt();
			t2 = in.nextInt();
			t3 = in.nextInt();
			t4 = in.nextInt();
			String str = in.nextLine();
			for(int j=0;j<t1;j++)
			{
				String s = in.nextLine();
				str = str.concat(s);
			}
			char[] arr = str.toCharArray();
			Arrays.sort(arr);
			int count = 1;
			int[] counter = new int[26];
			
			for(int a: counter)
			{
				a=0;
			}
			int max = 1;
			int max_counter=0;
			for(int x=0;x<arr.length;x++)
			{
				counter[arr[x]-'A']++;
			}
			
			for(int l=0;l<counter.length;l++)
			{
				if(counter[l] > max)
				{
					max = counter[l];
				}
			}
			for(int m=0;m<counter.length;m++)
			{
				if(counter[m] == max)
				{
					max_counter++;
				}
			}
			int ans = max_counter*max*t3+(arr.length-max_counter*max)*t4;
			System.out.println("Case "+n+": "+ans);
		}
	}

}
