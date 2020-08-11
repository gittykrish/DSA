#include<bits/stdc++.h>
using namespace std;

int firstOccuranceOfOne(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]!=1) low=mid+1;
    
        else{
            if(mid==0||arr[mid-1]!=1) return mid;
            else high=mid-1;
        }
    }
    return -1;
} 
int countOne(int arr[],int n){
    int first=firstOccuranceOfOne(arr,n);
    if(first==-1) return 0;
    else return n-first;
}

int main(){
    int arr[]={0,0,0,0,0,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    
    
    cout<<countOne(arr,n);

    
    return 0;
}