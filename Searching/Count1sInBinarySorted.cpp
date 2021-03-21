#include<bits/stdc++.h>

using namespace std;

int firstOccur(int arr[], int n){
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==0) low=mid+1;
        else{
            if(mid==0||arr[mid-1]==0) return mid;
            else high=mid-1;
        }
    }
    

    return -1;
}

int CountOne(int arr[], int n){
    int first=firstOccur(arr,n);
    if(first==-1) return 0;
    else return n-first;
}
int main(){
     int n;
     cin>>n;
     int arr[n];
     
     for(int i=0;i<n;i++) cin>>arr[i];

     
     cout<<CountOne(arr,n);
    return 0;
}