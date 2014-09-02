#include<cstdio>
#include<iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;
    while(n!=0)
    {
        int k=0;
        while(k<n)
        {
            char C;
            int a,b,c,d,e;
            int count=0;
            cin >> a;
            if(a <= 127){count++;C = 'A';}
            cin >> b;
            if(b <= 127){count++;C = 'B';}
            cin >> c;
            if(c <= 127){count++;C = 'C';}
            cin >> d;
            if(d <= 127){count++;C = 'D';}
            cin >> e;
            if(e <= 127){count++;C = 'E';}

            if(count > 1){cout << "*" << endl;}
            else{cout << C << endl;}
            k++;
        }
        cin >> n;
    }
return 0;
}
