#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin >> n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        int a=0;
        cin >> a;
        arr[i]=a;
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans+=arr[i];
    }
    cout << 0 - ans << endl;
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