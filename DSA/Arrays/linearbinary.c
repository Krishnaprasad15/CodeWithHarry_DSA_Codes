#include<stdio.h>

// Linear search 
// sorted or unsorted array
int linearSearch(int arr[],int size, int element){
    for(int i=0; i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
}

// Binary search 
// sorted only array
int binarySearch(int arr[],int size, int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
        mid= (low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(element>arr[mid]){
            low= mid+1;
        }
        else{
            high= mid-1;
        }
    }
    return 0;
}
int main(){
    // int arr[]={5,6,3,9,4,7,2,1};
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size= sizeof(arr)/sizeof(int);
    int element= 3;
    // int search = linearSearch(arr,size,element);
    int search = binarySearch(arr,size,element);
    printf("%d is found at index %d\n",element,search);
    
}