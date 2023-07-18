#include<stdio.h>
#include<stdlib.h>
struct circularQueue{
    int size;
    int f;
    int b;
    int* arr;
};
int isEmpty(struct circularQueue* q){
    if(q->f==q->b)
        return 1;
    return 0;
}
int isFull(struct circularQueue* q){
    if((q->b+1)%q->size==q->f)
        return 1;
    return 0;
}
int enqueue(struct circularQueue* q,int val){
    if(isFull(q))
        printf("Queue overflow");
    else{
        q->b=(q->b+1)%q->size;
        q->arr[q->b]=val;
        printf("Enqueued element is %d\n",val);
    }
}
int dequeue(struct circularQueue* q){
    int a=0;
    if(isEmpty(q))
       printf("Queue underflow");
    else{
       q->f=(q->f+1)%q->size;
       a=q->arr[q->f];
    }
    return a;
}
int main(){
    struct circularQueue* q;
    q->size=4;
    q->f=q->b=0;
    q->arr=(int*)malloc(q->size*sizeof(int));
    enqueue(q,10);
    enqueue(q,8);
    enqueue(q,7);
 
    printf("dequeued element is %d\n",dequeue(q));
    printf("dequeued element is %d\n",dequeue(q));
    printf("dequeued element is %d\n",dequeue(q));
    enqueue(q,3);
    enqueue(q,5);
    enqueue(q,8);
    
    if(isEmpty(q))
      printf("Queue is empty\n");
    else
      printf("Queue is not empty");
}