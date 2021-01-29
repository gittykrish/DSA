/*
Given a sorted array A of size N, delete all the duplicates elements from A.


Example 1:

Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: 2
Explanation: After removing all the duplicates 
only one instance of 2 will remain.
*/
int remove_duplicate(int a[],int n){
        // code here
        int j=0;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                a[j++]=a[i];
            }
        }
        a[j++]=a[n-1];
        return j;
    }