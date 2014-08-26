#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    int c;
    cin >> c;
    while(c != 0)
    {
        int n;
        cin >> n;
        vector<pair<int,int> > v;
        int i=0;
        while(i != n)
        {
            int x,y;
            cin >> x;
            cin >> y;
            v.push_back(make_pair(x,y));
            i++;
        }
        sort(v.begin(),v.end());
        int s = v.size();
        double p = (v[s-1].first - v[s-2].first)*(v[s-1].first - v[s-2].first);
        double q = (v[s-1].second - v[s-2].second)*(v[s-1].second - v[s-2].second);
        double y = v[s-2].second;
        double sum =  sqrt(p + q);
        for(int j=v.size() - 2;j>-1;j--)
        {
            if(y < v[j].second)
            {
                double x = (((y - v[j+1].second)*(v[j+1].first - v[j].first))/(v[j+1].second - v[j].second)) + (v[j+1].first);
                p = (x - v[j].first)*(x - v[j].first);
                q = (y - v[j].second)*(y - v[j].second);
                sum = sum + sqrt(p+q);
                y = v[j].second;
            }
        }
        printf("%.2f\n",sum);
        c--;
    }
    return 0;

}
