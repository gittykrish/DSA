#include<bits/stdc++.h>

using namespace std;
bool ispair(int arr[], int n,int sum){
    int left=0;
    int right=n-1;
    while(left<right){
        if(arr[left]+arr[right]==sum) return true;
        else if(arr[left]+arr[right]<sum) left++;
        else right--;
    }
    return false;
}
int main(){
    int n,sum;
    
    cin>>n>>sum;
   
    int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];

     }

     cout<<ispair(arr,n,sum);



    return 0;
}