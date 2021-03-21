
/*
     i/p ;-  [2 5 15 25 45 8]
     o/p :-  [5 15 25 45 -1 -1]


*/


#include<bits/stdc++.h>

using namespace std;
int main(){	
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	for(int i=0;i<n;i++){
		int next = -1;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				next=arr[j];
				break;
			}
		}
		cout<<next<<" ";
	}
    
	return 0;	
}