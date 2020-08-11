// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends


// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searche
//The task is to complete the function searchInSorted() which takes the sorted array arr[], its size N and the element K as inputs and returns 1 if the element is present in the array, else it returns -1. 
int searchInSorted(int arr[], int n, int k) 
{ 

   // Your code here
   int low=0,high=n-1;
   while(low<=high){
       int mid=low+(high-low)/2;
       if(arr[mid]==k) return 1;
       else if(arr[mid]>k) high=mid-1;
       else low=mid+1;
   }
   return -1;
}

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
  // } Driver Code Ends