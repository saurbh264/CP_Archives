#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int ans=0;
    if(n&1){
        for(auto i:v){
            ans=ans^i;
        }
        cout << ans << endl;
    }
    else{
        for(auto i:v){
            ans=ans^i;
        }
        if(ans == 0) cout << 1 << endl;
        else cout << -1 << endl;
    }
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