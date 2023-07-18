#include<stdio.h>
int traversal(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }printf("\n");
}
void insertionSort(int a[],int n){
    int key,j;
    for(int i=1;i<=n-1;i++){        //Loop fpr passes!
        key=a[i];                   //Storing the element to compare    
        j=i-1;                      
        while(j>=0 && a[j]>key){     
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;                 //if j is -1 then it assigns the value j[0] to key;
    }
}
int main(){
    int a[]= {8, 7, 9, 3, 5, 6};
    int n= 6;
    traversal(a,n);
    insertionSort(a,n);
    traversal(a,n);
}