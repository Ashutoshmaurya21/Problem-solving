#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *left;
    struct node *right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder (struct node *root){
    if(root==NULL){
        return;
    }
   
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    
    inorder(root);
   
   return 0;
}
   
