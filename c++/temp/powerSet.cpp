#include<algorithm>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

void powerSet(char* arr)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< size << endl;
    cout << endl;

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


int main()
{
    char arr[] = {'a','b','c'};
    powerSet(arr);
}

