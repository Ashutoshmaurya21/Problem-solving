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
 void insertatmid(node* &tail,node* &head,int position,int d){
     if(position==1){
         insertathead(head,d);
         return;
     }
     
    
     
     node* temp=head;
     int count=1;
     while(count<position-1){
         temp=temp->next;
         count++;
     }
      if(temp->next=NULL){
         insertattail(tail,d);
         return;
         
     }
     node* insertatmid=new node(d);
     insertatmid->next=temp->next;
     temp->next=insertatmid;
     
 }
 
 int main(){
     node* newnode= new node(20);
     node* head=newnode;
     node* tail=newnode;
     print(head);
     insertattail(tail,30);
     print(head);
     insertatmid(tail,head,1,40);
     print(head);
    insertatmid(tail,head,4,50);
     print(head);
     
     return 0;
 }
