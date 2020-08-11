#include<bits/stdc++.h>
using namespace std;

int indexOfFirstOccurance(int arr[],int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x) high=mid-1;
        else if(arr[mid]<x) low=mid+1;
        else{
            if(mid==0||arr[mid-1]!=arr[mid]) return mid;
            else high=mid-1;
        }
    }
    return -1;
} 
int indexOfLastOccurance(int arr[],int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x) high=mid-1;
        else if(arr[mid]<x) low=mid+1;
        else{
            if(mid==n-1||arr[mid+1]!=arr[mid]) return mid;
            else low=mid+1;
        }
    }
    return -1;
}
int countOccurance(int arr[],int n,int x){
    int first=indexOfFirstOccurance(arr,n,x);
    if(first==-1) return 0;
    else return indexOfLastOccurance(arr,n,x)-first+1;
}

int main(){
    int arr[]={10,15,15,20,20,20,20,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    //find occurance of 20 
    int x=20;
    
    cout<<countOccurance(arr,n,x);

    
    return 0;
}