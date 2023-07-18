#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node* n;
    n= (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}

void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d",root->data);
        inOrder(root->right);
    }
}
void insert(struct node* root,int key){
    // prev is to mark the prev node
    struct node * prev= NULL;
    while(root!=NULL){
        prev=root;
        if(root->data==key){
            printf("%d is already present in BST! So cannot insert",key);
            return;
        }else if(key<root->data){
            root= root->left;
        }else{
            root=root->right;
        }
    }
    struct node* new= createNode(key);
    if(key<prev->data){
        prev->left=new;
    }else{
        prev->right=new;
    }
}
int main(){
    struct node* p= createNode(5);
    struct node* p1= createNode(3);
    struct node* p2= createNode(6);
    struct node* p3= createNode(1);
    struct node* p4= createNode(4);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    
    insert(p,7);
    // inOrder(p);
}