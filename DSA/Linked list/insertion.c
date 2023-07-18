#include<stdio.h>
#include<stdlib.h>
// structure of a linked list
struct Node{
    int data;
    struct Node * next;
};
//Traversal of linked list
int traversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr= ptr->next;
    }
}
// Case1: Insertion of a element at first 
struct Node * insertionAtFirst(struct Node * head, int data){
     struct Node * ptr= (struct Node*)malloc(sizeof(struct Node));
     ptr->next=head;
     ptr->data=data;
     return ptr;
}
// Case2: Insertion of element in between(index)
struct Node * insertionAtIndex(struct Node * head, int data, int index){
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    struct Node* p= head;
    int i=0;
    while(i!=index-1){
        p= p->next;
        i++;
    }
    ptr->data=data;
    ptr->next= p->next;
    p->next=ptr;
    return head;
}
// Case3: Insertion of element at the end
struct Node * insertionAtEnd(struct Node*head,int data){
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    struct Node * p= head;
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    } 
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
// Case4: Insertion of element after a node
struct Node * insertionAfterNode(struct Node * head, struct Node * prevNode , int data){
    struct Node * ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    
    ptr->next= prevNode->next;
    prevNode->next=ptr;
    return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));

    head->data= 4;
    head->next=second;

    second->data= 7;
    second->next=third;

    third->data= 2;
    third->next=NULL;
    traversal(head);
    printf("\n");
    // head=insertionAtFirst(head,8);
    // insertionAtIndex(head,3,1);
    // insertionAtEnd(head,8);
    insertionAfterNode(head,head,5);
    traversal(head);

}