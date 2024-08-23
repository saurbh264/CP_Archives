#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void mainCode(){
    int n=0 , k=0;
    cin>>n >> k;
    vector<int> v(n);
    vector<int> alice;
    vector<int> bob;
    for(int i=0;i<n;i++) cin >> v[i];
    if(*max_element(v.begin(),v.end()) - *min_element(v.begin(),v.end()) < k){
        cout << 0 << "\n";
    }
    else if(k==0){
        for(int i=0; i<n;i++){
            int a=*max_element(v.begin(),v.end());
            alice.push_back(a);
            *max_element(v.begin(),v.end())=0;
            int b=*max_element(v.begin(),v.end());
            bob.push_back(b);
            *max_element(v.begin(),v.end())=0;
        }
        cout<< accumulate(alice.begin(),alice.end(),0) - accumulate(bob.begin(),bob.end(),0) << endl;
    }
    else{
        for(int i=0; i<n;i++){
            int a=*max_element(v.begin(),v.end());
            alice.push_back(a);
            *max_element(v.begin(),v.end())=0;
            int b=*max_element(v.begin(),v.end());
            bob.push_back(b);
            *max_element(v.begin(),v.end())=0;
        }
        int mx1 = accumulate(alice.begin(),alice.end(),0) - accumulate(bob.begin(),bob.end(),0);
        int mx=*max_element(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(mx -v[i] >k){
                v[i]+=k;
            }
            else{
                v[i]=mx;
            }
        }
        for(int i=0; i<n;i++){
            int a=*max_element(v.begin(),v.end());
            alice.push_back(a);
            *max_element(v.begin(),v.end())=0;
            int b=*max_element(v.begin(),v.end());
            bob.push_back(b);
            *max_element(v.begin(),v.end())=0;
        }
        int mx2=accumulate(alice.begin(),alice.end(),0) - accumulate(bob.begin(),bob.end(),0);
        cout << min(mx1,mx2) << endl;
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