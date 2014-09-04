#include<cstdio>
#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main()
{
    int S,B;
    cin >> S >> B;
    while ( S != 0 || B != 0)
    {
        vector<int> Q;
        for(int i=0;i<S;i++)
        {
            Q.push_back(i+1);
        }

        while(B!=0)
        {
            int m,n,L,R;
            cin >> m >> n;
            vector<int>::iterator pos_m = find(Q.begin(),Q.end(),m);
            vector<int>::iterator pos_n = find(Q.begin(),Q.end(),n);

            cout << "pos_m , pos_n" << *pos_m << " " << *pos_n << endl;

            if((*pos_m) == 0){L = -1;}
            else{L = (*pos_m)-2;}

            if((*pos_n) == Q.size()-1){R = -1;}
            else{R = (*pos_n);}

            Q.erase(Q.begin()+(*pos_m)-1,Q.begin()+(*pos_n));
            cout << L << " " << R << endl;

            for(int y=0;y < Q.size();y++){cout << Q[y] << endl;}
            B--;
        }
       cin >> S >> B;
    }

}
