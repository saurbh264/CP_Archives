#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int>a;
    int maxi = *max_element(v.begin(),v.end()) + 1;
    for(auto i:v){
        cout << maxi-i << " ";
    }
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