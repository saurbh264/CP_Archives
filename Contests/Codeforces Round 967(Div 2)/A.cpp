#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;


void mainCode(){
    int n=0;
    cin>> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    if(n<=1){
        cout << 0 <<"\n";
        return;
    }
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        if(!mp[v[i]]) mp[v[i]]=1;
        else mp[v[i]]+=1;
    }
    int maxFrequency=0;
    unordered_map<int, int>::iterator it = mp.begin();
    while (it != mp.end()) {
             maxFrequency = max( maxFrequency , it->second);
            ++it;
    }
    cout << n-maxFrequency << endl;
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