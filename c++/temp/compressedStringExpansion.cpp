#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>

using namespace std;
struct dat
{
    string s;
    long int count;
};
int main()
{
    vector<dat> v;
    string a = "abc23ab24a";
    string b;
    string temp,n;
    int flag=1;
    for(int i=0;i<a.length();i++)
    {
        if(a[i] <= 57 && a[i] >= 48)
        {
            n.push_back(a[i]);
            flag = 0;
        }
        else
        {
            if(flag==0)
            {
                dat d;
                d.count = atoi(n.c_str());
                d.s = temp;
                v.push_back(d);
                n.clear();
                temp.clear();
            }
            flag = 1;
            temp.push_back(a[i]);
        }
    }
    dat d;
    if(atoi(n.c_str()) == 0)
    {
        d.count = 1;
    }else{d.count = atoi(n.c_str());}
    d.s = temp;
    v.push_back(d);
    /*for(int i=0;i<v.size();i++)
    {
        cout << v[i].s << " " << v[i].count << endl;
    }*/

    int c = 6;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].s.size()*v[i].count >= c)
        {
            /* output goes here */
        }
        c = c - v[i].s.size()*v[i].count;
    }
    return 0;
}
