#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> vis(n+2,0);
    vis[0]=0;
    vis[n+1]=0;
    vis[v[0]]=1;
    for(int i=1;i<n;i++){
        vis[v[i]]=1;
        if(vis[v[i]-1]==0 && vis[v[i]+1]==0){
            cout<<"NO\n";
            return;
        }
    }
    cout << "YES\n";
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