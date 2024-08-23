#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;

void mainCode(){
    int n=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int t=0;
        cin >> t;
        v[i] = t;
    }
    if (n==2){
        cout << "YES\n";
        return;
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        if(!mp[v[i]]){
            mp[v[i]]=1;
        }
        else{
            mp[v[i]]+=1;
        }
    }
    if(mp.size()>2){
            cout << "NO\n";
            return;
        }
    else if(mp.size() == 1){
        cout << "YES\n";
        return;
    }
    for( auto i: mp){
        if(i.second == n/2){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main()
{
     int t = 1;
    cin >> t;
    while (t--)
    {
        mainCode();
    }
    return 0;
}