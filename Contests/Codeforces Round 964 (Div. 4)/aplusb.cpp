#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        int ans=num%10;
        num=num/10;
        ans+=num;
        cout<<ans << endl;
    }
    
}