#include<bits/stdc++.h>

using namespace std;

//naive Solution;

/*
int lastOccur(int arr[], int n, int target){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==target) return i;
    }

    return -1;
}

*/

int lastOccur(int arr[], int n, int target){
    int low=0;
    int high=n-1;


    while (low<=high)
    {
        /* code */
        int mid= low+(high-low)/2;

        if(arr[mid]<target)low=mid+1;
        else if(arr[mid]>target)high=mid-1;
        else{
            if(mid==n-1||arr[mid+1]!=target) return mid;
            else low=mid+1;
        }
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

    cout<<lastOccur(arr,n,target);

    return 0;
}