#include <bits/stdc++.h>
using namespace std;
#define ll long long

void mainCode(){
    ll n=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    ll ans = v[n-2];
    ll i=n-3;
    while(i>=0){
        ans-=v[i];
        i--;
    }
    
    cout << v[n-1] - ans << endl;
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
