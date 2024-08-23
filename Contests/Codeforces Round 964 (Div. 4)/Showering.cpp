#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        int n,s,m;
        cin >> n >> s >> m;
        vector<pair<int,int>> v(n);
        for(int j=0;j<n;j++){
            int x ,y;
            cin >> x >> y;
            v[j]={x,y};
        }
        int mx = v[0].first;
        for(int k=1;k<n;k++){
            mx= max(mx, v[k].first - v[k-1].second);
        }
        mx= max(mx,m - v[n-1].second);
        if(mx >= s){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}