#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int> a;
    a.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            a.push_back(v[i]);
            a.push_back(v[i]);
        }
        else{
            a.push_back(v[i]);
        }
    }
    cout << a.size() << endl;
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;
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