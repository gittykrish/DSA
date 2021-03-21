/*
Given an integer N. Find the number of digits that appear in its factorial. 
Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.
 

Example 1:

Input: N = 5
Output: 3
Explanation: Factorial of 5 is 120.
Number of digits in 120 is 3 (1, 2, and 0)
 


*/
#include<bits/stdc++.h>

int digitsInFactorial(int N)
{
    
    double sum=0.0; 
    for(int j=1;j<=N;j++)
    {
        sum+=log10(j);
    }
    return(1+floor(sum));
}