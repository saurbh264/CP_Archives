#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0,k=0;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){   
        int a;
        cin >> a;
        v[i]= a;
    }
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            cnt++;
        }
    }
    if(cnt == 0 || k>1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return;
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