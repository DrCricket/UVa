#include<cstdio>
#include<iostream>


using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=0;
    while(i != n)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a > 20 || b > 20 || c > 20)
        {
            cout <<"Case " << i+1 << ": " << "bad" << endl;
        }
        else{cout <<"Case " << i+1 << ": " << "good" << endl;}
        i++;
    }
}
