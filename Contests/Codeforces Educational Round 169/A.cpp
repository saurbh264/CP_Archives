#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    if(n>=3){
        cout << "NO\n";
        return;
    }
    for(int i=1;i<n;i++){
        if( abs(v[i] - v[i-1]) ==1){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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