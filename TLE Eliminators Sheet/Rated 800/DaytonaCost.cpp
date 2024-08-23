#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0,k=0;
    cin>> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int a=0;
        cin >> a;
        v[i]=a;
    }
    sort(v.begin(),v.end());
    if(binary_search(v.begin(),v.end(),k)){
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