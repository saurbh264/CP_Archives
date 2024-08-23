#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode() {
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    if(v[0] == 1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        mainCode();
    }
    return 0;
}