
// i/p :- 2 4 6 1 0 5 4  o/p:--  1 1 1 0 -1 4 -1

#include<bits/stdc++.h>
using namespace std;

vector<int>nextSmaller(int arr[], int n){
	vector<int>v;
	stack<int>s;

	for(int i=n-1;i>=0;i--){
		if(s.size()==0){
			v.push_back(-1);
		}
		else if(s.top()<arr[i]){
			v.push_back(s.top());
		}else{
			while(s.size()>0 && s.top()>=arr[i]){
				s.pop();
			}
			if(s.size()==0){
				v.push_back(-1);
			}else{
				v.push_back(s.top());
			}
		}
		s.push(arr[i]);
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
     vector<int> v=nextSmaller(arr,n);
 	
 	 printVector(v);


 	 return 0;
}