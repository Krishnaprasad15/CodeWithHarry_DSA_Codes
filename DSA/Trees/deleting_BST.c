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
struct node* inOrderPredecessor(struct node* root){
    root= root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct node* deleteNode(struct node* root, int val){
    struct node* iprev;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    if(val<root->data){
         root->left=deleteNode(root->left,val);
    }else if(val>root->data){
        root->right=deleteNode(root->right,val);
    }else{
        iprev= inOrderPredecessor(root);
        root->data= iprev->data;
        root->left=deleteNode(root->left,iprev->data);
    }
    return root;
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
    
    inOrder(p);
    deleteNode(p,6);
    printf("\n");
    inOrder(p);
}