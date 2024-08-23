#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    if(!(n & 1)){
        cout << -1 << endl;
        return;
    }
    if(n==1){
        cout << 1 << endl;
        return;
    }
    int k= n/2;
    vector<int> v;
    for(int i=0;i<k;i++){
        v.push_back(n-i);
    }
    for(int i=1;i<=n-k;i++){
        v.push_back(i);
    }
    for(int i=0;i<n;i++) cout << v[i] << " ";
    cout << endl;
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