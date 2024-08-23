#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0,m=0;
    cin >> n >> m;
    string x,s;
    cin >> x >> s;

    for(int i=0;i<=5;i++){
        if(x.find(s) != string :: npos){
            cout << i << endl;
            return;
        }
        x.append(x);
    }
    cout << -1 << endl;
    return;
    // n*m =25
    // worst possible case is 
    // x= "a"
    // s = "aaaa...25times"
    // 'a' -> 'aa'-> 4 -> 8 -> 16 -> 32
    //          1     2   3     4     5
    // so you need to check operation of adding only 5 times
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