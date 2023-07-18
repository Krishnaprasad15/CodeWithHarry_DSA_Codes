#include<stdio.h>
#include<stdlib.h>
// Creating a stack
struct stack{
    int size;
    int top;
    char *arr;
};
// Function to check a stack is empty or not!
int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }else{return 0;}
}
// Function to check a stack is full or not!
int isFull(struct stack* ptr){
    if(ptr->top== ptr->size-1)
       return 1;
    else 
       return 0;
}
// Function to push into stack
void push(struct stack* ptr,char exp){
    if(isFull(ptr))
       printf("stack overflow");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=exp;
    }
}
// Function to pop from the stack
char pop(struct stack* ptr){
    if(isEmpty(ptr))
       printf("Stack underflow");
    else{
        ptr->top--;
    }
}
// Function to check paranthesisMatching or not !
char paranthesisMatching(char * exp){
    struct stack * sp;
    sp->size=80;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    // Loop to push and pop expressions
    for(int i = 0; exp[i]!='\0'; i++)
    {
       if(exp[i]=='('){
        push(sp,'(');
       }
       else if(exp[i]==')'){
        if(isEmpty(sp))
            return 0;
        pop(sp);
       }
    }
    // If stack is empty then only paranthesis are matching
    if(isEmpty(sp))
       return 1;
    else
       return 0;
    
}

int main(){
    char * exp= "8*(((9)))";
    if(paranthesisMatching(exp))
       printf("Matching");
    else
       printf("Not Matching");
}