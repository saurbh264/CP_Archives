#include<iostream>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for(int i=0;i<testcases;i++){
        int num;
        cin >> num;
        if(num%3 == 0){
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
    }
}