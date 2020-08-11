/*   
    search element from infinite sized sorted array
    if element is present return index otherwise return -1
    
    complete function which takes array and search element as parameter
    
*/



//naive solution
int search(int arr[],int x){
    int i=0;
    while(true){
        if(arr[i]==x) return i;
        if(arr[i]>x) return -1;
        i++;
    }
}


//Efficient solution in O(log(pos)) using binary Search.
int binarySearch(int arr[], int x,int low, int high){
    while(low<=high){
        int mid = (high +low)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int search(int arr[], int x){
    if(arr[i]==x) return 0;
    int i=1;
    while(arr[i]<x) i=i*2;
    
    if(arr[i]==x) return i;
    return binarySearch(arr,x,i/2+1,i-1);
}

