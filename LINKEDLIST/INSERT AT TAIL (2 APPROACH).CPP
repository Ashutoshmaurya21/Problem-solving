// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    
    node(int val){
       this-> data=val;
       this-> next=NULL;
       
    }
};
void insert(int val,node *&head){
    node *temp=new node(val);
    if(head==NULL){
     head=temp;
     return;
    }
    node *IT=head;
    while(IT->next!=NULL)
    {
        IT=IT->next;
    }
    IT->next=temp;
}
void print(node *head){
    node *IT=head;
    while(IT!=NULL)
    {
        cout<<IT->data<<" ";
        IT=IT->next;
    }
}
int main() {
    //node *head=NULL;
  node *head= new node(57);
    insert(45,head);
    insert(34,head);
    insert(50,head);
    print(head);
    
}
