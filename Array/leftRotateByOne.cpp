#include<bits/stdc++.h>
using namespace std;
void leftRotattionByOne(int arr[],int n){
    int temp;
    temp=arr[0];
    for(int i=1;i<n;i++)
        arr[i-1]=arr[i];
    arr[n-1]=temp;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    leftRotattionByOne(arr,n);
    printArray(arr,n);
    return 0;
}