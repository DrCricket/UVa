#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n!=0)
    {
        n--;

        int m,s,t1,t2,t3,t4,k;
        unsigned int c;
        cin >> m; // measurement interval
        cin >> s; // Wait time
        cin >> t1 >> t2 >> t3 >> t4;
        cin >> c;

        unsigned int bit8 = c&0xff; // lower 8 extracted
        unsigned int t1_on,t2_on,t3_on,t4_on;
        unsigned int t1_h,t2_h,t3_h,t4_h;
        t1_on = ((1<<0)&bit8)>>1;
        t2_on = ((1<<1)&bit8)>>2;
        t3_on = ((1<<2)&bit8)>>3;
        t4_on = ((1<<3)&bit8)>>4;
        t1_h = ((1<<4)&bit8)>>5;
        t2_h = ((1<<5)&bit8)>>6;
        t3_h = ((1<<6)&bit8)>>7;
        t4_h = ((1<<7)&bit8)>>8;
        cin >> k;
        int sum=0;
        string ans="";
        while(k !=0)
        {
            int time,temp;
            cin >> time >> temp;
            sum = sum+time;

            if(t1_on == 1 && s > sum)
            {
                if(t1_h == 1)
                {
                    if(t1>temp){ans = ans+"yes ";}
                    else{ans = ans + "no ";}
                }
                else
                {
                    if(t1<temp){ans = ans+"yes ";}
                    else{ans = ans + "no ";}
                }
            }
            else{ans = ans+"no ";}

            if(t2_on == 1 && s > sum)
            {
                if(t2_h == 1)
                {
                    if(t2>temp){ans = ans+"yes ";}
                    else{ans = ans + "no ";}
                }
                else
                {
                    if(t2<temp){ans = ans+"yes ";}
                    else{ans = ans + "no ";}
                }
            }
            else{ans = ans+"no ";}


            if(t3_on == 1 && s > sum)
            {
                if(t3_h == 1)
                {
                    if(t3>temp){ans = ans+"yes ";}
                    else{ans = ans + "no ";}
                }
                else
                {
                    if(t3<temp){ans = ans+"yes ";}
                    else{ans = ans + "no ";}
                }
            }
            else{ans = ans+"no ";}

            if(t4_on == 1 && s > sum)
            {
                if(t4_h == 1)
                {
                    if(t4>temp){ans = ans+"yes ";}
                    else{ans = ans + "no ";}
                }
                else
                {
                    if(t4<temp){ans = ans+"yes ";}
                    else{ans = ans + "no ";}
                }
            }
            else{ans = ans+"no ";}
            cout << ans;
            k--;
        }
        //cout << t4_h << t3_h << t2_h << t1_h << t4_on  << t3_on << t2_on << t1_on  << endl;

    }
}
