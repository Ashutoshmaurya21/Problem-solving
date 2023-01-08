#include<iostream>
#include<deque>
using namespace std;
 
 int main(){
     deque<int>d;
     
     d.push_back(1);
     d.push_front(2);
     
     for(int i:d){
         cout<<i<<" ";
         cout<<endl;
     }
         
    d.pop_back();
    
    cout<<"index->"<<d.at(0)<<endl;
    cout<<"size->"<<d.size();
    d.erase(d.begin(),d.begin()+1);
    cout<<"size->"<<d.size();
    for(int i:d){
         cout<<i<<" ";}
         
     cout<<endl;
     
     cout<<"size->"<<d.size();
 }
