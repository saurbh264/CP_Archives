#include <bits/stdc++.h>
using namespace std;
#define ll long long

void mainCode(){
    ll n=0,k=0;
    cin >> n >> k;
    vector<ll> v(n);
    ll sum=0;
    ll count=0;
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>=k){
            sum+=v[i];
        }
        if( v[i]== 0 && sum != 0) {
            count++;
            sum--;
        }
    }
    cout << count << endl;

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
