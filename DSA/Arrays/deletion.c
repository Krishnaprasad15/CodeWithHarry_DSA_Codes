#include<Stdio.h>
// traversal code
void traversal(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

// Deletion function 
int deletion(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    
}

int main(){
  int arr[100]= {1,2,4,5,6,9};
  int size=6,element= 3,index=2;
  traversal(arr,size);
  deletion(arr,size,index);
  size-=1;
  traversal(arr,size);

}