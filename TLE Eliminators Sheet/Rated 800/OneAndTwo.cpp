#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void mainCode() {
    int n = 0;
    cin >> n;
    vector<int> arr(n);
    int two=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]==2){
            two++;
        }
    }
    int count2=0;
    for(int i=0;i<n-1;i++){
        if(arr[i] == 2){
            count2++;
        }
        if( 2*count2 == two){
            cout << i+1 << endl;
            return;
        }
    }
    cout << -1 <<endl;
    return;

}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        mainCode();
    }
    return 0;
}
