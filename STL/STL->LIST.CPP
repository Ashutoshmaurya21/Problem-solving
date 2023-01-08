#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;
    
    list<int>ashutosh(5,100);
    cout<<"printing ashutosh"<<endl;
    
    for(int i:ashutosh){
        cout<<i<<" ";
        cout<<endl;
    }
    
    l.push_front(2);
    cout<<endl;
    l.push_back(3);
    
    for(int i:l){
        cout<<i<<" ";
    }
    
    
    
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
}
