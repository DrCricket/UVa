package UVa;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;

public class UV_11824 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int i = in.nextInt();
		while(i!=0)
		{
			i--;
			ArrayList<Integer> list = new ArrayList<Integer>();
			int inp = in.nextInt();
			while(inp !=0)
			{
				list.add(inp);
				inp = in.nextInt();
			}
			Collections.sort(list,Collections.reverseOrder());
			Iterator<Integer> itr = list.iterator();
			long sum=0;
			int t=1;
			while(itr.hasNext())
			{
				sum += Math.pow(itr.next(),t);
				t++;
			}
			sum *=2;
			if(sum > 5000000)
			{
				System.out.println("Too expensive");
			}
			else
			{
				System.out.println(sum);
			}
			
		}
		
	}

}
