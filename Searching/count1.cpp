
#include <bits/stdc++.h>
using namespace std;

 //The task is to complete the function countOne() which takes the array arr[] and its size N as inputs and returns the count of 1s in the input array

// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int arr[], int n)
{
    
    // Your code here
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==0&&(arr[mid-1]==1 || mid==0)) return mid;
        else if(arr[mid]==0) high=mid-1;
        else low=mid+1;
    }
    
}

// Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(arr, n)<<endl;
    }
    return 0;
} 