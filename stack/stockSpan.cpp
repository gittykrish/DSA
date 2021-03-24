/*

							stock span problem

				i/p :- 100, 80, 60, 70, 60, 75, 85;

				o/p :- 1,	1,	1,	2,	1,	4,	6;

*/
#include<bits/stdc++.h>
using namespace std;
              // method : 1
/*
vector<int> stockSpan(int arr[], int n){
	std::vector<int>idx;
	stack<int>s;

	for(int i=0;i<n;i++){
		if(s.size()==0){
			idx.push_back(-1);
		}else if(arr[s.top()]>arr[i]){
			idx.push_back(s.top());
		}else{
			while(s.size()>0 && arr[s.top()]<=arr[i]){
				s.pop();
			}
			if(s.size()==0){
				idx.push_back(-1);
			}else{
				idx.push_back(s.top());
			}
		}
		s.push(i);
	}
	vector<int >res;
	for(int i=0;i<n;i++){
		res.push_back(i-idx[i]);
	}
	return res;
}

*/

//method - 2;
vector<int> stockSpan(int arr[], int n){
	stack<pair<int,int>>s;
	vector<int>idx;
	for(int i=0;i<n;i++){
		if(s.size()==0){
			idx.push_back(-1);
		}else if(s.top().first>arr[i]){
			idx.push_back(s.top().second);
		}else{
			while(s.size()>0 && s.top().first<=arr[i]){
				s.pop();
			}
			if(s.size()==0){
				idx.push_back(-1);
			}
			else{
				idx.push_back(s.top().second);
			}
		}
		s.push({arr[i],i});
	}
	vector<int>res;
	for(int i=0;i<n;i++){
		res.push_back(i-idx[i]);
	}
	return res;
}
 void printVector(vector<int>&res){
 	for(auto x:res){
 		cout<<x<<" ";
 	}
 }

int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	vector<int>res=stockSpan(arr,n);
	printVector(res);

	return 0;
}