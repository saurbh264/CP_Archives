#include <bits/stdc++.h>
using namespace std;
#define ll long long

void mainCode(){
    ll n=0,k;
    cin >> n >> k;
    vector<ll> v(n);
    ll mini = INT_MAX;
    for(ll i=0;i<n;i++){
        cin >> v[i];
        mini = min(v[i],mini);
    }
    if(mini > 0){
        cout << 0 << endl;
        return;
    }
    else{
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second > 1){
                mp[it.first + k] += it.second-1;
            }
            if(it.first != cnt){
                cout << cnt << endl;
                return;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
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
