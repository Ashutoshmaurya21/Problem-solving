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
 void print(node* &head){
     node *temp=head;
     while(temp!=0){
        cout<<temp->data<<"->";
        temp=temp->next;
     }
     cout<<endl;
 }
 
 
 int main(){
node *newnode= new node(10);
node* head=newnode;
print(head);

  return 0;   
 }
