/*
Given a number N, find an integer denoting the smallest number evenly divisible by each number from 1 to n.


Example 1:

Input:
N = 3
Output: 6
Explanation: 6 is the smallest number 
divisible by 1,2,3.


*/


class Solution{
public:
    long long gcd(long long  a, long long  b)
        {
          if (b == 0)
            return a;
          return gcd(b, a % b);
        }
         
        
        long long lcm( long long a, long long b)
        {
            return (a / gcd(a, b)) * b;
        }
    long long getSmallestDivNum(long long n){
        // code here
        long long res=1;
        for(long long i=2;i<=n;i++){
            res=lcm(res,i);
        }
        return res;
    }
};