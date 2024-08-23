#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int32_t main()
{
    int t = 1;
    cin >> t;
    int mark=0;
    vector<int> v;
    while (t--)
    {
        int n=0;
        cin >> n;
        if(n==0) mark=1;
        v.push_back(abs(n));
    }
    if(mark==1){
        cout << 0 << endl;
    }
    else{
        cout << *min_element(v.begin(),v.end()) << endl;
    }
    return 0;
}