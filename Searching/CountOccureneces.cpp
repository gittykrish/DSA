#include<bits/stdc++.h>

using namespace std;
  int firstOccur(int arr[], int n, int target){
      int low=0;
      int high=n-1;

      while(low<=high){
          int mid= low+(high-low)/2;

          if(arr[mid]<target)low=mid+1;
          else if(arr[mid]>target) high=mid-1;
          else{
              if(mid==0||arr[mid-1]!=target) return mid;
              else high=mid-1; 
          }
        
      }
      return -1;
  }
  int lastOccur(int arr[], int n ,int target){
      int low=0;
      int high=n-1;
    
       while(low<=high){
           int mid=low+(high-low)/2;
           if(arr[mid]>target) low=mid+1;
           else if(arr[mid]<target) high=mid-1;
           else{
                if(mid==n-1|| arr[mid+1]!=target) return mid;
                else low= mid+1;

           }
       }
       return -1;
  }
  int countOccur(int arr[], int n, int target){
      int first=firstOccur(arr,n,target);
      if(first==-1) return 0;
      else return lastOccur(arr,n,target)-firstOccur(arr,n,target)+1;
  }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int target;
    cin>>target;

    cout<<countOccur(arr,n,target);


    return 0;
}