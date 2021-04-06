  // Given  an N*N square matrix , find sum of all sub squares of size K*K;
  // i/p :-  n=5, k=3;

  // 		arr[][]= { {1,1,1,1,1},
  // 				   {2,2,2,2,2},
  // 				   {3,3,3,3,3},
  // 				   {4,4,4,4,4},
  // 				   {5,5,5,5,5},

  // 				  };
  // o/p :-  18 18 18
  // 		 27 27 27
  // 		 36 36 36


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sumOfsubSquareMatrix(vector<vector<int>>&v,int k){
	int n=v.size();
	vector<vector<int>>res(n-k+1);
	
	int m = v[0].size();

	int dp[n+1][m+1];

	memset(dp,0,sizeof(dp));

// precomputing
   for(int i=1;i<=n;i++){
   	for(int j=1;j<=m;j++){
   		dp[i][j] = v[i-1][j-1] + dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1];
   	} 
   }

   for(int i=k;i<=n;i++){
   	for(int j=k;j<=m;j++){
   		
   			int sum = dp[i][j] - dp[i][j-k] - dp[i-k][j] + dp[i-k][j-k];
   			cout<<sum<<" ";
   			//res[i].push_back(sum);

   	}
   	cout<<"\n";
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