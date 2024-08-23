#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int cnt=0;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i] == 0){
            cnt++;
        }
        else{
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    mx=max(mx,cnt);
    cout << mx <<endl;
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