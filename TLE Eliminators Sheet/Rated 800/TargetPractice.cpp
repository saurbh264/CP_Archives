#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mainCode(){
    vector<string> str(10);
    for(int i=0;i<10;i++){
        string s;
        cin >> s;
        str[i]=s;
    }
    int ans=0;
    int arr[10][10]=
    {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(str[i][j]=='X'){
                ans+=arr[i][j];
            }
        }
    }
    cout << ans << endl;
    return;
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