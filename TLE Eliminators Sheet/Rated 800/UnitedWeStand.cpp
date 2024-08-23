#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n = 0; cin >> n; 
	vector<int> inp; inp.assign(n, 0);
	for (auto& x : inp) cin >> x;
	sort(inp.begin(), inp.end());
	if (inp.back() == inp[0]) {
		cout << "-1\n";
		return;
	}
	else {
		int it = 0;
		while (inp[it] == inp[0]) it++;
		cout << it << " " << n - it << "\n";
		for (int j = 0; j < it; ++j) cout << inp[j] << " ";
		for (int j = it; j < n; ++j) cout << inp[j] << " ";
	}
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