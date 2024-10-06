#include <bits/stdc++.h>
using namespace std;
#define ll long long

void mainCode(){
    ll n=0;
    cin >> n;
    vector<ll> v(n);
    ll oddSum =0;
    ll evenSum =0;
    for(ll i=0;i<n;i++) {
        cin >> v[i];
        if(i&1) evenSum = max(evenSum,v[i]);
        else oddSum= max(oddSum,v[i]);
        }
    if(n&1){
        if(evenSum > oddSum){
            cout << max(evenSum,oddSum) + n/2 << endl;
        }
        else cout << max(evenSum,oddSum) + n/2 + 1 << endl;
    }
    else{
        cout << max(evenSum,oddSum) + n/2 << endl;
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
