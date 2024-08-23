#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0,a=0,b=0;
    cin>>n >> a >> b;
    if( a==b && b==n && a==n){
        cout << "YES\n";
    }
    else{
        if(n-(a+b) > 1) cout<< "YES\n";
        else cout << "NO\n";
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