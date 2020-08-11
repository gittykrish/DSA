#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to search x in arr
// arr: input array
// X: element to be searched for
int search(int arr[], int n, int x)
{
    for(int i=0;i<n;i++){
        if(arr[i]==x) return i;
    }
    return -1;
    
}


// { Driver Code Starts.

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cin>>x;
        cout<<search(arr,sizeOfArray,x)<<endl; //Linear search
    }

    return 0;
    
}
  // } Driver Code Ends