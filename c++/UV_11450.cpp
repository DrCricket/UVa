#include<algorithm>
#include<cstdio>
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n != 0)
    {
        int m,c;
        cin >> m >> c;
        priority_queue<int,vector<int>,greater<int> > q[c];
        int q_arr[c];
        int j=0;
        int c1 = c;
        while(c1 != 0)
        {
            cin >> q_arr[j];
            int k=0;
            for(k=0;k<q_arr[j];k++)
            {
                int inp;
                cin >> inp;
                q[j].push(inp);
            }
            j++;
            c1--;
        }
        // Values ready
        int sum = 0;
        int curr[c];

        for(int t=0;t<c;t++)
        {
            sum = sum + q[t].top();
            curr[t] = q[t].top();
            q[t].pop();
            if(sum > t)
            {printf("\nno solution");
            return 0;}
        }
        // Taken the min value of all objects
        int diff = m - sum;

            for(int t=0;t<c;t++)
            {
                sum = sum + q[t].top() - curr[t];
                if(diff < 0 || m-sum > diff)
                {
                    sum = sum - q[t].top() + curr[t];
                }
                else if(diff > 0 && m-sum <= diff)
                {
                    curr[t] = q[t].top();
                    q[t].pop();
                    diff = m - sum;
                }
            }

        printf("\n%d",sum);
        n--;
    }
    return 0;
}
