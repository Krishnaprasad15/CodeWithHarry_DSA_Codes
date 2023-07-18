#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Creating a queue structure
struct queue{
    int size;
    int f;
    int b;
    int* arr;
};
// Queue empty function 
int isEmpty(struct queue* q){
    if(q->f==q->b)
        return 1;
    return 0;
}
// Queue full function 
int isFull(struct queue* q){
    if(q->b==q->size-1)
        return 1;
    return 0;
}
// Function to add an element (enqueue-adding)
int enqueue(struct queue* q,int val)
{
    if(isFull(q)){
        printf("Queue overflow");
    }else{
        q->b+=1;
        q->arr[q->b]=val;
    }
}
// Function to remove an element from FIFO (dequeue-eliminating 1st element)
int dequeue(struct queue* q)
{
    int a=-1;
    if(isEmpty(q)){
        printf("Queue underflow");
    }else{
        q->f+=1;
        a=q->arr[q->f];
    }
    return a;
}
int main(){
    struct queue * q;
    q->size=100;
    q->f=q->b=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    enqueue(q,10);
    enqueue(q,8);
    enqueue(q,7);
    printf("dequeued element is %d\n",dequeue(q));
    printf("dequeued element is %d\n",dequeue(q));
    if(isEmpty(q))
      printf("Queue is empty\n");
    else
      printf("Queue is not empty");

}