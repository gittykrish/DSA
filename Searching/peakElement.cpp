#include<bits/stdc++.h>

using namespace std;

//naive solution
/*
int peak(int arr[], int n){
    if(n==1) return arr[0];
    if(arr[0]>arr[1]) return arr[0];
    if(arr[n-1]>arr[n-2])return arr[n-1];

    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1]&& arr[i]>arr[i+1]) return arr[i];
    }
    return -1;
}     */

int peak(int arr[], int n){
    int low=0;
    int high=n-1;
    while (low<=high){
        int mid=low+(high-low)/2;
        if((mid==0||arr[mid]>=arr[mid-1])&&(mid==n-1||arr[mid]>=arr[mid+1])) return arr[mid];
        if(arr[mid-1]>arr[mid]) high=mid-1;
        else low=mid+1;
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<peak(arr,n);

    return 0;
}