#include <bits/stdc++.h>
using namespace std;

void mainCode() {
    int n = 0;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 4; j++) {
            if (v[i][j] == '#') cout << j + 1 << " ";
        }
    }
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        mainCode();
    }
    return 0;
}
