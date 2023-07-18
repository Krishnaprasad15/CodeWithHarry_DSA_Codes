#include<stdio.h>
#include<stdlib.h>

// Creating a linked list 
struct Node{
    int data;
    struct Node * next;
};

// Traversal of linked list 
int traversal(struct Node * ptr){
    while(ptr!= NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
        printf("\n");
    }
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node)); 
    third= (struct Node*)malloc(sizeof(struct Node));
    fourth= (struct Node*)malloc(sizeof(struct Node));
    // head stores data and next points to second data
    head->data= 5;
    head->next= second;
    // second to third
    second->data= 9;
    second->next= third;
    // third to fourth 
    third->data=3;
    third->next= fourth;
    // fourth to end of an linked list i.e NULL
    fourth->data= 7;
    fourth->next= NULL;
    traversal(head);
}

