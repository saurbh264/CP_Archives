#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll sumton(ll n){return n*(n+1) /2;}

void mainCode(){
    ll n=0,k=0,x=0;
    cin >> n >> k >> x;
    ll sum = k * (2 * n - k + 1) / 2;
    if(sum < x || x < sumton(k)){
        cout << "NO\n";
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