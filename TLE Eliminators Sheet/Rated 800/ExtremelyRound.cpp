#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){

}
//  You can even Hard Code the answer.
// void mainCode(){
//     int n=0;
//     cin>>n;
//     int ans=0;
    // if(n<10) ans=n;
    // else if(n<100) ans=9+n/10;
    // else if(n<1000) ans=18+n/100;
    // else if(n<10000) ans=27+n/1000;
    // else if(n<100000) ans=36+n/10000;
    // else ans=45+n/100000;
    //   cout<<ans<<endl;
    //   return;
// }

int main()
{
    vector<int> v;
    for(int i=1;i<999999;i++){
        int cnt=0;
        int n= i%10;
        if(n!=0) cnt++;
        n=n/10;
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        mainCode();
    }
    return 0;
}