#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    string s;
    cin>> s;
    int l = 0, r = n - 1, ans = n;
	while (s[l] != s[r] && ans > 0) {l++; r--; ans -= 2;}
	cout << ans << '\n';
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