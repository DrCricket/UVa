#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;



int main()
{
    vector< vector<int> > v(1000, vector<int>(1000));
    int n;
    cin >> n;
    int i=0;
    while(n!=0)
    {
        int t;
        cin >> t;
        while(t != 0)
        {
            int in;
            cin  >> in;
            v[i].push_back(in);
            t--;
        }
        i++;
        n--;
    }
    vector<vector<int> >::iterator itr = v.begin();

    //Vector created

    cout << v.size() << endl;
    /*for(int j=0;j< v.size() ; j++)
    {
        for(int k=0;k<v[j].size();k++)
        {
            cout << v[j][k] << endl;
        }
    }*/
    string str;
    cin >> str;
    while(str != "STOP")
    {
        if(str == "ENQUEUE")
        {
            int elem;
            cin >> elem;
        }
        else
        {

        }
        cin >> str;
    }

}
