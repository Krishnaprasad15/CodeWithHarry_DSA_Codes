// postOrder- left sub-tree-> right sub-tree-> root
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
// function to create nodes
struct node* createNode(int data){
    struct node *n;
    n= (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}
// Recursive search
struct node* search(struct node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
// Iterative search
struct node* iterativeSearch(struct node* root,int key){
  while(root!=NULL){
    if(root->data==key){
        return root;
    }
    else if(key<root->data){
        root= root->left;
    }
    else{
       root =root->right;
    }
  }
    return NULL;
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
    
    struct node* n= iterativeSearch(p,10);
    if(n!=NULL){
        printf("Found: %d",n->data);
    }else{
        printf("not found!");
    }
}