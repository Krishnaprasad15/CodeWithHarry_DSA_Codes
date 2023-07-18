#include<stdio.h>
#include<stdlib.h>
int traversal(int a[], int n){
    for(int i=0;i<n;i++)
       printf("%d ",a[i]);
    printf("\n");
}
int maximum(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
           max=a[i];
        }
    }return max;
}
int countSort(int a[],int n){
    int i,j;
    int max= maximum(a,n);
    // printf("%d\n",max);
    int *count= (int*)malloc((max+1)*sizeof(int));
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    i=0;
    j=0;
    while(i<=max){
        if(count[i]>0){
            a[j]=i;
            count[i]--;
            j++;
        }else{
            i++;
        }
    }
}
int main(){
    int a[]={7,8,3,5,9,4,11,16,12};
    int n=9;
    traversal(a,n);
    countSort(a,n);
    traversal(a,n); 
}