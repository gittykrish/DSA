/*
Given an array arr[] of size N, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.

 

Example 1:

Input:
N = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.
*/
#include<bits/stdc++.h>
using namespace std;
int firstRepeated(int arr[], int n) {
    //code here
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>1) return i+1;
    }
    return -1;
}