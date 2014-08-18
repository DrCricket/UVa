#include<algorithm>
#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

int main(int argc, char const *argv[])
{
    priority_queue<int, std::vector<int>, greater<int> > minHeap;

    // Rope fragments
    minHeap.push(6);
    minHeap.push(2);
    minHeap.push(3);
    minHeap.push(4);

    int sum = 0;

    while(minHeap.size() > 1) // Keep adding min two numbers and pushing them
    {
        int t = minHeap.top();
        minHeap.pop();
        t = t + minHeap.top();
        minHeap.pop();
        sum = sum + t;
        minHeap.push(t);
    }

    cout << sum << endl;
    return 0;
}
