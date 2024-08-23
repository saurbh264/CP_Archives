#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0,x=0;
    cin >> n >> x;
    vector<int> gas(n);
    for(int i=0;i<n;i++){
        int m=1;
        cin >> m;
        gas[i] =m;
    }
    int mx=gas[0];
    for(int i=1;i<n;i++){
        mx =max(gas[i]-gas[i-1],mx);
    }
    mx = max(mx,2*(x-gas[n-1])); // why because there would be no gas station between x and gas[n-1] so you need to calculate back and forth
    cout << mx << endl;
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