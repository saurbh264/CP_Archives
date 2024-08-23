#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int x=0,k=0;
    cin >> x >> k;
    if(x%k!=0){
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    else{
        cout << 2  << endl;
        cout << 1 << " " << x-1 << endl;
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