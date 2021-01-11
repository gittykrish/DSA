/*

 Given a number N, find an integer denoting the smallest number evenly divisible by each number from 1 to n  

Input:
N = 3
Output: 6
Explanation: 6 is the smallest number 
divisible by 1,2,3.

Input:
N = 6
Output: 60
Explanation: 60 is the smallest number 
divisible by 1,2,3,4,5,6.

*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

class Solution{
  public:
    ll gcd(ll a, ll b)
    {
      if (b == 0)
        return a;
      return gcd(b, a % b);
    }
    
    ll lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }
    ll getSmallestDivNum(ll n){
        
        ll res=1;
        for(ll i=2;i<=n;i++){
            res=lcm(res,i);
        }
        return res;
    }

};

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    Solution ob;
    cout<<ob.getSmallestDivNum(n)<<"\n";
  }
}


