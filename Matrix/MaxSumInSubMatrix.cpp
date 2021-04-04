// maximum sum of sub matrix
// input :-
// 	3 3 2
// 	2 4 5
// 	1 3 6
// 	1 5 5


// output: - 
// 	19



#include<bits/stdc++.h>
using namespace std;
int maxSumInsubMatrixN(vector<vector<int>>&v, int b){
	int maxSum=INT_MIN;
	int n=v.size();
	int m=v[0].size();
	for(int i=0;i<n;i++){

		for(int j=0;j<m;j++){
			if(i+b<=n && j+b<=m){
				int sum=0;
				for(int k=i;k<i+b;k++){
					for(int l=j;l<j+b;l++){
						sum+=v[l][k];
					}
				}
				maxSum=max(maxSum,sum);
			}
	    	
		}

	}
	return maxSum;
}

int maxSumInsubMatrix(vector<vector<int>>&v, int b){
	int n=v.size();
	int m=v[0].size();
	int dp[n+1][m+1];
	int maxSum=INT_MIN;
	memset(dp,0,sizeof(dp));

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]= v[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int sum=0;
			if(i-b>=0 && j-b>=0){
				sum = dp[i][j] - dp[i-b][j] - dp[i][j-b] + dp[i-b][i-b];
				maxSum= max(maxSum,sum);
			}
		}
	}


	return maxSum;
}


void printVector(vector<vector<int>>&v){
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){

	int n,m,b;
	cin>>n>>m>>b;

	vector<vector<int>>v(n);

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int a;
			cin>>a;
			v[i].push_back(a);
		}
	}
	//int res=maxSumInsubMatrixN(v,b);
	int res=maxSumInsubMatrix(v,b);

	cout<<res<<"\n";

	return 0;
}