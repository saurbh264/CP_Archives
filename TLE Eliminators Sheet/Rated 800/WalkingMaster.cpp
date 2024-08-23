#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int a=0,b=0,c=0,d=0;
    cin>>a>>b>>c>>d;
    if(a==c && b==d){
        cout <<0 << endl;
        return;
    }
    if(b>d){
        cout << -1 << endl;
        return;
    }
    int op=0;
    while(b!=d){
        op++;
        b++;
        a++;
    }
    if(a<c){
        cout << -1 << endl;
    }
    else{
        while(a!=c){
        a--;
        op++;
    }
    cout << op << endl;
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