#include<bits/stdc++.h>
using namespace std;
/*
//naive solution
int firstOccur(int arr[],int n,int target){
     for(int i=0;i<n;i++){
         if(arr[i]==target){
             return i;
         }
     }
     return -1;
}

*/
/*

        if(arr[mid]<target) low=mid+1;
        else if(arr[mid]>target) high=mid-1;
        else{
            if(mid==0!!arr[mid-1]!=target) return mid;
            else high=mid-1;
        }

*/

int firstOccur(int arr[], int n, int target){
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==target && (mid==0||arr[mid-1]!=target)) return mid;
        else if(arr[mid]>=target) high=mid-1;
        else low=mid-1;
    }
    return -1;
    
}
int main(){
 int n;
 cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int target;
cin>>target;
cout<<firstOccur(arr,n,target);
return 0;
}