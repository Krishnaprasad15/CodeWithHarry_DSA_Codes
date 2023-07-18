#include<stdio.h>
#include<stdlib.h>
// Declaring them as global so that we need not to pass in function 
struct Node* f=NULL;
struct Node* b=NULL;
// Creating a node structure
struct Node{
    int data;
    struct Node* next;
};
// Traversal function 
int traversal(struct Node*  ptr){
    while(ptr!=NULL){
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
// Enqueue function 
int enqueue(int val){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL)
       printf("Queue is full");
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=b=n;
        }else{
            b->next=n;
            b=n;
        }
    }
}
// Dequeue function 
int dequeue(){
    struct Node* n= f;
    int val=-1;
    if(f==NULL){
        printf("Queue is empty!");
    }else{
        f=f->next;
        val= n->data;
        free(n);
    }
    return val;
}
int main(){
    enqueue(10);
    enqueue(8);
    enqueue(6);
    enqueue(0);
    traversal(f);
    printf("Dequeued element is %d\n",dequeue());
    traversal(f);

}