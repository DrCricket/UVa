#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
    int n,l;
    scanf("%d %d",&l,&n);
    map<string,string> m;

    for(int i=0;i<l;i++)
    {
        string s1,s2;
        cin >> s1 >> s2;
        pair<string,string> p = make_pair(s1,s2);
        m.insert(p);
    }

    map<string,string>::const_iterator it;

    for(int i=0;i<n;i++)
    {
        string s3;
        cin >> s3;
        it = m.find(s3);
        char c1 = s3.at(s3.size()-1);
        char c2 = s3.at(s3.size()-2);
        if(it != m.end()){cout << it->second << endl;}
        else if(c1 == 'o' || c1 == 's' || c1 == 'x' || (c1 == 'h' && (c2 == 's'||c2 == 'c'))){s3.append("es");cout<<s3<<endl;}
        else if(c2 != 'a' && c2 != 'e' && c2 != 'i' && c2 != 'o' && c2 !='u' && c1 == 'y'){s3.erase(s3.size()-1);s3.append("ies");
        cout<<s3<<endl;}
        else{s3.append("s");cout << s3 << endl;}
    }
    return 0;
}
