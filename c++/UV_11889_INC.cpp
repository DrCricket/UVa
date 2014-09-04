#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n!=0)
    {
        int a,b;
        cin >> a >> b;
        if(b%a==0){cout << b/a << endl;}
        else{cout <<"NO SOLUTON" << endl;}
        n--;
    }
    return 0;
}
