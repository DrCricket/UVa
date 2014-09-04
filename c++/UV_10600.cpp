#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T != 0)
    {
        int n,m;
        cin >> n >> m;
        int arr[n][n];
        for(int i=0;i<m;i++)
        {
            int a,b,c;
            cin >> a >> b >> c;
            arr[a-1][b-1] = c;
            arr[b-1][a-1] = c;
        }

        T--;
    }
}
