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
 void print(node* &head){
     node *temp=head;#include<iostream> 
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
 void print(node* &head){
     node *temp=head;
     while(head!=NULL){
         cout<<temp->data<<"->";
        temp=temp->next;
     }
     cout<<endl;
 }
 
 int main(){
     node* newnode= new node(20);
     node* head=newnode;
     print(head);
     insertathead(head,30);
     print(head);
     
     
 }
     while(temp!=NULL){
         cout<<temp->data<<"->";
        temp=temp->next;
     }
     cout<<endl;
 }
 
 int main(){
     node* newnode= new node(20);
     node* head=newnode;
     print(head);
     insertathead(head,30);
     print(head);
     
     
 }
