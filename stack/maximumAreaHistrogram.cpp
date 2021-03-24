/*

							Maximum Area Histogram

				i/p :- 6, 2, 5, 4, 5, 1, 6

				o/p :- 12


*/

#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>&v){
	for(auto x:v){
		cout<<x<<" ";
	}
}

vector<int> NearestsmallerRight(int arr[], int n){
	int pseudoIndex=n;
	stack<pair<int,int>>s;
	vector<int>right;

	for(int i=n-1;i>=0;i--){
		if(s.size()==0){
			right.push_back(pseudoIndex); 
		}else if(s.top().first<arr[i]){
			right.push_back(s.top().second);
		}else{
			while(s.size()>0 && s.top().first>=arr[i]){
				s.pop();
			}
			if(s.size()==0){
				right.push_back(pseudoIndex);
			}else{
				right.push_back(s.top().second);
			}
		}
		s.push({arr[i],i});
	}
	reverse(right.begin(),right.end());
	return right;
}


vector<int> NearestsmallerLeft(int arr[],int n){
		int pseudoIndex=-1;
	stack<pair<int,int>>s;
	vector<int>left;

	for(int i=0;i<n;i++){
		if(s.size()==0){
			left.push_back(pseudoIndex); 
		}else if(s.top().first<arr[i]){
			left.push_back(s.top().second);
		}else{
			while(s.size()>0 && s.top().first>=arr[i]){
				s.pop();
			}
			if(s.size()==0){
				left.push_back(pseudoIndex);
			}else{
				left.push_back(s.top().second);
			}
		}
		s.push({arr[i],i});
	}
	return left;
}

int MAH(int arr[], int n){
	vector<int>right=NearestsmallerRight(arr,n);
	vector<int>left= NearestsmallerLeft(arr,n);
	
	vector<int> w;
	vector<int> area;
	for(int i=0;i<n;i++){
		w.push_back(right[i]-left[i]-1);
	}
	
	for(int i=0;i<n;i++){
		area.push_back(w[i]*arr[i]);
	}
	
	return *max_element(area.begin(),area.end());
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int area=MAH(arr,n);

	cout<<area;

	return 0;
}