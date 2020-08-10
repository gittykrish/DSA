#include<bits/stdc++.h>
using namespace std;
/*
int indexOfFirstOccurance(int arr[],int low,int high, int x){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x &&(arr[mid-1]<x ||mid==0)) return mid;
        else if(arr[mid]==x) high=mid-1;
        else low=mid+1;
        
    }
    return -1;
}
 */
int indexOfFirstOccurance(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x) high=mid-1;
        else if(arr[mid]<x) low=mid+1;
        else{
            if(mid==0 || arr[mid-1]!=arr[mid]) return mid;
            else high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,10,10,10,20,20,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    //finding first of 20 
    int x=20;
    
   // cout<<indexOfFirstOccurance(arr,0,n-1,x);
   cout<<indexOfFirstOccurance(arr,n,x);
    
    return 0;
}