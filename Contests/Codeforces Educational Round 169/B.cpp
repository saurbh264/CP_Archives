#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode()
{
    int l = 0, r = 0, L= 0, R = 0;
    cin >> l >> r >> L >> R;
    int low = max(l,L);
    int high = min(r,R);
    if( low > high){
        cout << 1 << "\n";
        return;
    }
    int ans= high-low;
    if( min(l,L)<low) ans++;
    if( max(r,R)>high) ans++;
    cout << ans << "\n";
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