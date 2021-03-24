/*			find pair in array whose difference is k;
				if exist such pair return 1 else -1;

*/

#include<bits/stdc++.h>
using namespce std;
bool biSearch(int arr[], int low, int high,int k){
	while(low<=high){
		int mid=(high+low)/2;
		if(arr[mid]==k) return true;
		else if(arr[mid]<k) low=mid+1;
		else high=mid-1;
	}
	return false;
}
int findPair(int arr[], int n,int k){
	
	sort(arr, arr+n);

	for(int i=0;i<n-1;i++){
		if(biSearch(arr,i+1,n-1,k+arr[i])) return 1;
	}
	return -1;
}
int main(){

	int n,k;
	cin>>n>>k;

	int arr[n];

	for(int i=0;i<n;i++)cin>>arr[i];

	cout<<findPair(arr,n,k);
}