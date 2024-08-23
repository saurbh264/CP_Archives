#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
        long long n, k;
    cin >> n >> k;
    if (n % 2 == 0 || k % 2 == 1) {
        // If n is even or k is odd, it is always possible.
        cout << "YES\n";
    } else {
        // If both n and k are odd, it's impossible.
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