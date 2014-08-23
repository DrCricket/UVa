#include<algorithm>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    void powerSet(char*);
    char arr[] = {'a','b','c','d'};
    powerSet(arr);
}

void powerSet(char* arr)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    int powset = pow(2,size);

    for(int i=0;i<powset;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i&1<<j){cout << arr[j] << " ";}
        }
        cout<<endl;
    }
}
