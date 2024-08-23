#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
using namespace std;

void mainCode(){
    int n=0;
    cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    if(accumulate(v.begin(),v.end(),0)&1){
        cout <<"NO\n";
    }
    else{
        cout << "YES\n";
    }
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