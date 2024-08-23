#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    if(*max_element(v.begin(),v.end()) == *min_element(v.begin(),v.end())){
        cout << 1 << endl;
        return;
    }
    else{
        int mx= INT32_MAX;
        for(int i=0;i<n-1;i++ ){
            if(v[i]>v[i+1]){
                cout << 0 <<endl;
                return;
            }
            mx=min(mx,v[i+1]-v[i]);
        }
        if(mx==1){
            cout << 1 << endl;
        }
        else{
            cout << (mx>>1) +1 << endl;
        }
        return;
    }
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