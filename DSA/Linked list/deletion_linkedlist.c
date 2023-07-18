#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int traversal(struct Node*ptr){
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}
// Case1: Deletion of first node
struct Node * deletionAtFirst(struct Node * head){
    struct Node* ptr=head;
    head= head->next;
    free(ptr);
    return head;
}
// Case2: Deletion in between node 
struct Node* deletionAtIndex(struct Node* head,int index){
    struct Node*ptr= head;
    struct Node*q = ptr->next;
    int i=0;
    while(i!=index-1){
        ptr=ptr->next;
        i++;
    }
    ptr->next=q->next;
    free(q);
    return head;
}
// Case3: Deletion at the end
struct Node * deletionAtEnd(struct Node* head){
    struct Node * ptr= head;
    struct Node* q= head->next;
    while(q->next!=NULL){
        ptr=ptr->next;
        q= q->next;
    }
    ptr->next = NULL;
    free(q);
    return head;
}
// Case4: Deletion of a node with value
struct Node * deletionAfterNode(struct Node* head,int value){
    struct Node * ptr= head;
    struct Node * q= head->next;
    while(q->data!=value && q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    if(q->data==value){
        ptr->next=q->next;
        free(q);
    }
    return head;

}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));

    head->data= 5;
    head->next= second;

    second->data= 3;
    second->next= third;

    third->data= 8;
    third->next= NULL;
    traversal(head);
    printf("\n");
    // head=deletionAtFirst(head);
    // head= deletionAtIndex(head,1);
    //  head= deletionAtEnd(head);
    head= deletionAfterNode(head,3);
    traversal(head);

}