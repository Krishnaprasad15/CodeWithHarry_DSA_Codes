#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
int linkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr= ptr->next;
    }
}
int isEmpty(struct Node* ptr){
    if(ptr==NULL)
       return 1;
    else
       return 0;
}
int isFull(struct Node* ptr){
    struct Node* n= (struct Node*)malloc(sizeof(struct Node));
    if(n==NULL)
       return 1;
    else
       return 0;
}
struct Node * push(struct Node* ptr, int x){
    struct Node* p= (struct Node*)malloc(sizeof(struct Node));
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }
    else{
        p->data=x;
        p->next=ptr;
        ptr=p;
        return ptr;
    }
}
int pop(struct Node* ptr){
    if(isEmpty(ptr)){
        printf("stack Underflow\n");
    }else{
        struct Node* p= ptr;
        ptr= ptr->next;
        
        free(p);
        return ptr;
    }
}
int main(){
    struct Node * top= NULL;
    top= push(top,8);
    top= push(top,6);
    top= push(top,9);
    linkedListTraversal(top);
    top= pop(top);
    linkedListTraversal(top);
}
