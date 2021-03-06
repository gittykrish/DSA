
// i/p :- 2 4 6 11 0 5 4  o/p:--  1 2 3 -1 5 -1 -1
// index of next greater element

#include<bits/stdc++.h>
using namespace std;

vector<int>nextGreater(int arr[], int n){
	vector<int>v;
	stack<int>s;

	for(int i=n-1;i>=0;i--){
		if(s.size()==0){
			v.push_back(-1);
		}
		else if(arr[s.top()]>arr[i]){
			v.push_back(s.top());
		}else{
			while(s.size()>0 && arr[s.top()]<=arr[i]){
				s.pop();
			}
			if(s.size()==0){
				v.push_back(-1);
			}else{
				v.push_back(s.top());
			}
		}
		s.push(i);
	}
	
	reverse(v.begin(),v.end());
	return v;
}
void printVector(std::vector<int>&v){
	for(auto x:v){
		cout<<x<<" ";
	}
}
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)cin>>arr[i];
     vector<int> v=nextGreater(arr,n);
 	
 	 printVector(v);


 	 return 0;
}