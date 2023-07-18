#include <stdio.h>
int Traversal(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");
}
void bubbleSort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int isSorted = 1 ;
        printf(" %d pass\n",i);
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted= 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}
int main()
{
    int arr[] = {8, 7, 9, 3, 5, 6};
    // int arr[]={1,2,3,4,5,6};
    int n = 6;
    Traversal(arr, n);
    bubbleSort(arr, n);
    Traversal(arr, n);
    return 0;
}