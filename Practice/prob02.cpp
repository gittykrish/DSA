/*
    Given a non empty array of interger , every element appears two times except one ,
    which appears exactly one . Find that single one.
    Input : [2,3,2]       output: 3
    Input : [0,1,1,0,99]  Output : 99
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        int res=0;
        for(int i=0;i<n;i++){
            res=res^arr[i];
        }
        cout<<res<<"\n";
    }
    return 0;
}
