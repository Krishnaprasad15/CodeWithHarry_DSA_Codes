#include<stdio.h>
#include<stdlib.h>
// Creating a stack
struct stack{
   int size;
   int top;
   int *arr;
};
// Function to check whether the stack is empty or not
int isEmpty(struct stack* ptr){
    if(ptr->top==-1)
        return 1;
    else
        return 0;
}
// Function to check whether the stack is full or not
int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1)
        return 1;
    else
        return 0;
}
// Function to push elements into stack
int push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow! %d cannot be pushed into stack\n",val);
        return -1;
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        return val;
    }
}
// Fucntion to pop elements from the stack
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow! can't pop from the stack");
    }else{
      int val=ptr->arr[ptr->top];
       ptr->top--;
       return val;
    }
}
// peak function to find an element from stack 
int peak(struct stack* ptr,int i){
    int index= ptr->top-i+1;
    if(index<0){
        printf("Not a valid index");
    }else{
        return ptr->arr[index];
    }
}
int main(){
    struct stack* sp= (struct stack*)malloc(sizeof(struct stack));
    sp->size=8;
    sp->top= -1;
    sp->arr= (int*)malloc(sp->size*sizeof(int));
    printf("Full: %d\n",isFull(sp));
    printf("Empty: %d\n",isEmpty(sp));
    push(sp,3);
    push(sp,4);
    push(sp,2);
    push(sp,8);
    push(sp,5);
    push(sp,9);
    push(sp,1);
    printf("Full: %d\n",isFull(sp));
    printf("Empty: %d\n",isEmpty(sp));
    // printf("poped %d from stack\n",pop(sp));
    for(int j=1;j<=sp->top+1;j++){
        printf("%d is index of %d\n",j,peak(sp,j));
    }

    
}