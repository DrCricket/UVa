#include<cstdio>
#include<iostream>

using namespace std;

int sumDig(int n)
{
    if(n<10)
    {
        return n;
    }
    int sum=0;
    while( n != 0)
    {
        sum = sum + (n%10);
        n = n/10;
    }
    return sumDig(sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d\n",sumDig(n));
        scanf("%d",&n);
    }
    return 0;
}
