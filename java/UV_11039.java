package UVa;

import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class UV_11039 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int i = in.nextInt();
		while(i!=0)
		{
			i--;
			int c = in.nextInt();
			Map<Integer,Boolean> map = new TreeMap<Integer,Boolean>();
			for(int k=0;k<c;k++)
			{
				int inp = in.nextInt();
				if(inp<0)
				{
					map.put(-inp, false);
				}
				else
				{
					map.put(inp, true);
				}
			}
			int ans=0;
			Boolean[] arr = new Boolean[c];
			int j=0;
			for(Map.Entry<Integer,Boolean> entry : map.entrySet()) 
			{
				  arr[j] = entry.getValue();
				  j++;
			}
			
			for(int x=0;x<c-1;x++)
			{
				if(arr[x] != arr[x+1])
				{
					ans++;
				}
			}
			System.out.println(++ans);

		}

	}

}
