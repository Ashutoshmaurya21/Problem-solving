#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max_heap
   priority_queue<int>max;
    //min_heap
    priority_queue<int,vector<int>,greater<int>>min;
    
    max.push(1);
    max.push(4);
    max.push(3);
    max.push(2);
     
     int n=max.size();
     cout<<"MAX SERIES NUMBER ->";
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;
    
    
    min.push(1);
    min.push(4);
    min.push(3);
    min.push(2);
     int m=min.size();
     cout<<"MIN SERIES NUMBER ->";
    for(int i=0;i<m;i++){
        cout<<min.top()<<" ";
        min.pop();
    }cout<<endl;
     
}
