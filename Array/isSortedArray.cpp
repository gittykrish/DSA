#include<bits/stdc++.h>
using namespace std;
bool isSortedArray(int arr[],int n){
    if(n==1) return true;
    for(int i=1;i<n;i++)
        if(arr[i]<arr[i-1]) return false;
    return true;
}
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
        if(isSortedArray(arr,n)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}