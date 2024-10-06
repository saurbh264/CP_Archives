#include <bits/stdc++.h>
using namespace std;
#define ll long long

void mainCode(){
    ll n=0,k=0;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) {
        cin >> v[i];
    }
    priority_queue<int, vector<int>, greater<int>> minHeap(v.begin(), v.end());
    while (minHeap.size() > 1) {
        int x = minHeap.top();
        minHeap.pop();
        int y = minHeap.top();
        minHeap.pop();
        int avg = (x + y) / 2;
        minHeap.push(avg);
    }
    cout << minHeap.top() << endl;
    return;
}

int main()
{
    int tc=0;
    cin >> tc;
    while(tc--)
    {
        mainCode();
    }
    return 0;
}
