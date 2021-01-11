#include<bits/stdc++.h>
#define ll long long
using namespace std;



// method 1
void printNcR(int n, int r)
{
 
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd 
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
    // if our approach is correct p = ans and k =1
    cout << p << endl;
}


// method 2
long long binomialCoff(long long n, long long k){
    long long res=1;
    if(k>n-k) k=n-k;
    for(long long i=0; i<k; i++){
        res *= (n-i);
        res /= (i+1);
    }
    return res;
}
//method 3
ll ncr(ll n, ll k) {
    if (n < 0 || k < 0 || k > n) return 0;
    if (n == k || k == 0) return 1;
    ll ans = 1;
    for (ll i = k + 1; i <= n; i++) {
        ans *= i;
        ans /= (i - k);
    }
    return ans;
}