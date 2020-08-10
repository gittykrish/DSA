#include<bits/stdc++.h>
using namespace std;
/*
int indexOfLastOccurance(int arr[],int n, int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x &&(arr[mid+1]>x ||mid==n-1)) return mid;
        else if(arr[mid]==x) low=mid+1;
        else high=mid-1;
        
    }
    return -1;
} */
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

int main(){
    int arr[]={20,20,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    //finding first of 20 
    int x=5;
    
    cout<<indexOfLastOccurance(arr,n,x);
    
    return 0;
}