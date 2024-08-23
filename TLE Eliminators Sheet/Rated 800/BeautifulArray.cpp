#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    if(v[n-1] == v[0]){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << v[n-1] << " " << v[0] << " ";
    for(int i=1;i<n-1;i++){
        cout << v[i] << " ";
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