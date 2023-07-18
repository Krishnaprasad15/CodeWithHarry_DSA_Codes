#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
    struct Node* prev;
};
int traversal(struct Node * N1){
    struct Node * ptr= N1;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
   
}
int main(){
    struct Node * N1= (struct Node*)malloc(sizeof(struct Node));
    struct Node * N2= (struct Node*)malloc(sizeof(struct Node));
    struct Node * N3= (struct Node*)malloc(sizeof(struct Node));
    struct Node * N4= (struct Node*)malloc(sizeof(struct Node));

    N1->data= 3;
    N1->next=N2;
    N1->prev=NULL;
    N2->data= 4;
    N2->next=N3;
    N2->prev=N1;
    N3->data= 2;
    N3->next=N4;
    N3->prev=N2;
    N4->data= 6;
    N4->next=NULL;
    N4->prev=N3;
    traversal(N1);
}