#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string in;
    cin >> in;
    while(in != "#")
    {
        char arr[in.size()+1];
        strcpy(arr,in.c_str());

        if(next_permutation(arr,arr+in.size()))
        {
            cout << arr <<endl;
        }
        else
        {
            cout << "No Successor" << endl;
        }
        cin >> in;
    }
    return 0;
}
