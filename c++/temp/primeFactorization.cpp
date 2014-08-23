#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    vector<int> factors(int );
    vector<int> v = factors(1786);
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
}

vector<int> factors(int k)
{
    vector<int> v;
    while(k%2 == 0)
    {
        v.push_back(2);
        k/=2;
    }
    for(int i=3;i <= sqrt(i);i=i+2)
    {
        if(k%i)
        {
            v.push_back(i);
            k/=i;
        }
    }
    if(k>2){v.push_back(k);}
    return v;
}
