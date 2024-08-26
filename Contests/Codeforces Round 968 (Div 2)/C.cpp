#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
#include<stack>
#include<queue>
using namespace std;

void mainCode() {
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    map<char,int> mp;
    for(int i=0;i<n;i++) mp[s[i]]++;
    while(n--){
        for(int i=0;i<26;i++){
            if(mp['a'+i]){
                ans+='a'+i;
                mp['a'+i]--;
            }
        }
    }
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