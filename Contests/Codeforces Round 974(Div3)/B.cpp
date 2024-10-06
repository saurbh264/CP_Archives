#include <iostream>
using namespace std;
#define ll long long

ll count_odds(ll a, ll b) {
    return (b + 1) / 2 - a / 2;
}
void mainCode(){
    ll n, k;
    cin >> n >> k;

    ll start = n - k + 1;
    ll odd_count = count_odds(start, n);
    if (odd_count % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        mainCode();
    }

    return 0;
}
