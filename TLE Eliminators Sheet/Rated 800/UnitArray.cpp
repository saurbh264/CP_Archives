#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    int n=0;
    cin>>n;
    vector<int> v(n);
    int cntp=0,cntn=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]==1){
            cntp+=1;
        }
        else{
            cntn+=1;
        }
    }
    int count=0;
	
    while(cntp<cntn || cntn%2!=0){
        count+=1;
        cntn-=1;
        cntp+=1;
    }
    cout << count << endl;
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