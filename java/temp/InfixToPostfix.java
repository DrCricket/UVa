package sundry;

import java.util.*;

public class InfixToPostfix {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Stack<Character> s = new Stack<Character>();
		ArrayList<Character> l = new ArrayList<Character>();
		l.add('-'); // Assuming precedence - '-' , '+' , '/' , '*'
		l.add('+');
		l.add('*');
		l.add('/');
		
		char[] arr = in.nextLine().toCharArray();
		String output = "";

		for(int i=0;i<arr.length;i++)
		{
			if(l.contains(arr[i]))
			{
				while((!s.isEmpty())&&(l.indexOf(s.peek()) > l.indexOf(arr[i])))
				{
					output = output.concat(Character.toString(s.pop()));
				}
				s.push(arr[i]);
			}
			else
			{
				output = output.concat(Character.toString(arr[i]));
			}
		}
		while(!s.isEmpty())
		{
			output = output.concat(Character.toString(s.pop()));
		}
		System.out.println(output);

	}

}
