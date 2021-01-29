/*
Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

 

Example 1:

Input:
N = 6
Output: 1
Explanation: The only number with 
3 divisor is 4.

*/
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int exactly3Divisors(int N)
{
    int counter=0; //Initializing counter to zero
    N = sqrt(N);
        
    for(int i=1;i<=N;i++) //running a loop from 1 to N
    {
        // A number N only has 3 divisors if it is a perfect square and its square root is a prime number,
        //  and we know the number of perfect squares less than N which is sqrt(N),
        // so just checking if i is prime or not
        if(isPrime(i)) 
        counter++;
    }
    return counter;
}