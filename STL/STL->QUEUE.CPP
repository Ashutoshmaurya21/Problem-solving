#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
    q.push("samrat");
    q.push("ashutosh");
    q.push("maurya");
    
    cout<<"The front string in queue is: "<<q.front()<<endl;
    
      cout<<"The front string in queue is: "<<q.back()<<endl;
      q.pop();
     cout<<"The front string in queue is: "<<q.front()<<endl;
    
    cout<<" The size of the queue : "<<q.size();
      
      

}
