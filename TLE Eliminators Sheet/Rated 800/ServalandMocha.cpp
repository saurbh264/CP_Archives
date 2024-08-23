#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;


void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(v[i],v[j])==1 || __gcd(v[i],v[j])==2){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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