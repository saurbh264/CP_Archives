#include<bits/stdc++.h>
using namespace std;


void mainCode(){
    int n=0;
    cin>>n;
    string s;
    cin >> s;
    int r= sqrt(n);
    if(r*r != n){
        cout << "NO\n";
        return;
    }
    for(int i=0;i<r;i++){
        if(s[i*r] != '1' && s[i*r +r -1] != '1'){
            cout << "NO\n";
            return;
        }
    }
    for(int i=1;i< r-1;i++){
        if(s[i*r] != '1' && s[i*r + r -1] != '1'){
            cout << "NO\n";
            return;
        }
        for(int j=1;j < r -1 ; j++){
        if(s[i*r+j] != '0'){
            cout << "NO\n";
            return;
        }
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