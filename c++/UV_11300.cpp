#include<cstdio>
#include<algorithm>
#include<iostream>


using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int arr[n];
        int i=0;
        int sum=0;
        while(i!=n)
        {
            cin >> arr[i];
            sum+=arr[i];
            i++;
        }
        sum=sum/n;
    }
    return 0;
}
