#include<bits/stdc++.h>
using namespace std;

void mainCode(){
    int l,r;
    cin >> l >> r;
    if(r-l<=1) {cout << (r-l)+1 << endl;
    return;}
    int cnt=1;
    for(int i=1;i<=r;i++){
        if(l+i <=r){ cnt ++;
        l=l+i;}
        else break;
    }
    cout << cnt << endl;
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