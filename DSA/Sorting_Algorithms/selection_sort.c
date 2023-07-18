#include<stdio.h>
int traversal(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }printf("\n");
}

void selectionSort(int a[],int n){
    int min, temp;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[min]){
                temp=a[j];
                a[j]=a[min];
                a[min]=temp;
            }
        }
    }
}
int main(){
    int a[]={8, 7, 9, 3, 5, 6};
    int n= 6;
    traversal(a,n);
    selectionSort(a,n);
    traversal(a,n);
}