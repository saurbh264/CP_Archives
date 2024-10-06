#include <bits/stdc++.h>
using namespace std;
#define ll long long
void mainCode(){
    int n=0,a=0,b=0;
    cin >> n >> a >> b;
    int mini = min(a,b);
    int result = ceil((double)n / mini);
    cout << result << endl;
    return;
}

int main()
{
    int tc=0;
    cin >> tc;
    while(tc--)
    {
        mainCode();
    }
    return 0;
}
