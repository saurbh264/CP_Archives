#include <bits/stdc++.h>
using namespace std;

void mainCode(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.find("...") != string::npos){
        cout << 2 << endl;
        return;
    }
    else{
        cout << count(s.begin(),s.end(),'.') << endl;;
    }
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