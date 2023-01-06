#include<iostream> 
using namespace std;
 class node{
     public:
     int data; 
     node *next;
     
     node(int data){
         this->data=data;
         this->next=NULL;
     }
 };
 
 void insertathead(node* &head, int d){
     node *temp=new node(d);
     temp->next=head;
     head=temp;
     
 }
 
void insertattail(node* &tail,int d){
     node *temp=new node(d);
     tail->next=temp;
     tail=temp;
 }
 void print(node* &tail){
     node *temp=tail;
     while(temp!=NULL){
         cout<<temp->data<<"->";
        temp=temp->next;
     }
     cout<<endl;
 }
 
 int main(){
     node* newnode= new node(20);
     node* head=newnode;
     node* tail=newnode;
     print(head);
     insertattail(tail,30);
     print(head);
     
     return 0;
 }
