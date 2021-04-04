  // Given  an N*N square matrix , find sum of all sub squares of size K*K;
  // i/p :-  n=5, k=3;

  // 		arr[][]= { {1,1,1,1,1},
  // 				   {2,2,2,2,2},
  // 				   {3,3,3,3,3},
  // 				   {4,4,4,4,4},
  // 				   {5,5,5,5,5},

  // 				  };
  // o/p :- 18 18 18
  // 		 27 27 27
  // 		 36 36 36


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sumOfsubSquareMatrix(vector<vector<int>>&v,int m){
	vector<vector<int>>res(m);
	 for(int i=0;i<v.size();i++){
	 	for(int j=0;j<v[i].size();j++){

	 		if(i+m<=v.size() && j+m <=v[i].size()){
	 			int sum=0;
	 			for(int k=i;k<i+m;k++){
		 			for(int l=j;l<j+m;l++){
		 				sum +=v[l][k];
		 			}
		 		}
		 		res[j].push_back(sum);
	 		}
	 	}
	 }
	 return res;

}


void printVector(vector<vector<int>>&v){
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n,k;
	cin>>n>>k;

	vector<vector<int>>v(n);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int a;
			cin>>a;
			v[i].push_back(a);
		}
	}

	vector<vector<int>>res=sumOfsubSquareMatrix(v,k);

	printVector(res);



	return 0;
}