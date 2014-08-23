#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    /*unsigned int t;
    cin >> t;
    int lower = t&0x00ff;
    int upper = t&0xff00;
    int32_t out;
    out = (out&0xff00)|(upper);
    out = (out&0x00ff)|(lower << 16);
    cout << out;*/

    int num;
    while(scanf("%d",&num) == 1)
    {
        int32_t b0,b1,b2,b3;
        int32_t res;

        b0 = (num & 0x000000ff) << 24;
        b1 = (num & 0x0000ff00) << 8;
        b2 = (num & 0x00ff0000) >> 8;
        b3 = (num & 0xff000000) >> 24;

        res = b0 | b1 | b2 | b3;

        cout << num << " converts to " << res << endl;
    }
}
