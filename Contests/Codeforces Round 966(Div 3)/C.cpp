#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void mainCode(){
    int n=0,m=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    cin >> m;
    vector<string> str(m);
    for(int i=0;i<m;i++) cin >> str[i];

    for(int i=0;i<str.size();i++){
        if(str[i].length()==n){
            bool a=0;
            unordered_map<char,int> mp;
            for(int k=0;k<str[i].length();k++){
                char j=str[i][k];
                if(!mp[j]) {
                    mp[j]=v[k];
                }
                else if(mp[j]!=v[k]){
                    cout << "NO\n";
                    a=1;
                    break;
                }
            }
            if(a!=1){
                vector<char> store(n);
                for(int k=0;k<n;k++){
                    store[k]=str[i][k];
                }
                unordered_map<int,char> st;
                for(int k=0;k<n;k++){
                    st[v[k]]=store[k];
                }
                if(store.size()!=st.size()){
                    cout << "NO\n";
                    a=1;
                }
            }
            if(a!=1) cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
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