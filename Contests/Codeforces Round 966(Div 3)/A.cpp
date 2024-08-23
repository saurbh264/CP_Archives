#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    string s = to_string(n);
    if(s.find("100") != string::npos || s=="101" || s=="10"){
        cout <<"NO\n";
          
    }
    else if(s.find("10") != string::npos){
        int found = s.find("10");
        if(found == 0){
            cout <<"YES\n";
        }
        else{
            cout << "NO\n";
        }  
    }
    else{
        cout << "NO\n";
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