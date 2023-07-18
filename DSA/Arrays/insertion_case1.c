#include<Stdio.h>
//traversal code
void traversal(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

// Insertion function
int insertion(int arr[],int size, int element, int capacity, int index){
     if(size>=capacity){
      return -1;
     }
     for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
     }
     arr[index]=element;
     return 0;
}

int main(){
  int arr[100]= {1,2,4,5,6,9};
  int size=6,element= 3,index=2;
  traversal(arr,size);
  insertion(arr,size,element,100,index);
  size+=1;
  traversal(arr,size);

}