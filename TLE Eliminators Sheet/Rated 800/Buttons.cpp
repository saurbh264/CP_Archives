#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int a=0,b=0,c=0;
    cin >> a >> b >> c;
    if(c&1){
        if(b>a){
            cout << "Second\n";
        }
        else{
            cout<< "First\n";
        }
    }
    else{
        if(a>b){
            cout << "First\n";
        }
        else{
            cout << "Second\n";
        }
    }
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