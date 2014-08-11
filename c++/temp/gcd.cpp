#include<algorithm>
#include<iostream>
using namespace std;

int gcd(int x,int y)
{
    while(x != 0)
    {
        int t = x;
        x = y%x;
        y = t;
    }
    return y;
}
int main()
{
    cout << gcd (120,64) << endl;

}
