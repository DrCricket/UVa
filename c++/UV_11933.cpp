#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   while(n != 0)
   {
       unsigned int a = 0,b = 0;
       int i=0,j=0;
       while(n > 0)
       {

            if(1 & n)
            {
                if(j%2)
                {
                    b = b|(1<<i);
                }
                else
                {
                    a = a|(1<<i);
                }
                j++;
            }
            i++;
            n = n >> 1;
        }
        cout << a << " " << b << endl;
        cin >> n;
    }
return 0;
}
