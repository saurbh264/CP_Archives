#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    if( n==1) {
        cout << 0 <<"\n";
        return;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        v[i]=v[i]&1;
    }
    for(int i=0;i<n-1;i++){
        if(v[i] == v[i+1]) cnt++;
    }
    cout << cnt <<"\n";
    return;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        mainCode();
    }
    return 0;
}