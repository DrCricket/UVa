#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n;

		while(scanf("%d",&n)==1)
		{

			int array[n];
			for(int j=0;j<n;j++)
			{
				cin >> array[j];
			}
			int ans=0;
			for(int x=0;x<n-1;x++)
			{
				for(int y=x+1;y<n;y++)
				{
					if(array[x] > array[y])
					{
						/*int temp = array[x];
						array[x] = array[y];
						array[y] = temp;*/
						ans++;
					}
				}
			}
			cout << "Minimum exchange operations : "<< ans <<endl;
		}
}
