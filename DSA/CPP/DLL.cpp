#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    // constructor
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
// Traversal
void traverse(Node* &head){
    Node*temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// Doubly linked list length
int getLen(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
// Inserting at first
void inserAtFirst(Node* &head,int d){
    Node * node= new Node(d);
    head->prev=node;
    node->next=head;
    head=node;
}
// Insert at end
void inserAtEnd(Node * &head, int d){
    Node* node= new Node(d);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
    node->prev=temp;
}
int main(){
    Node* node1= new Node(10);
    Node* head=node1;
       
    traverse(head);
    // cout<<getLen(head);

    inserAtFirst(head,8);
    inserAtEnd(head,16);
    traverse(head);
    
    // cout<<head->data<<endl;
    // cout<<getLen(head);
}