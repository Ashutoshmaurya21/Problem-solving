#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(3);
    s.push(10);
    s.push(12);
    
    s.pop();
    
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    
    
    if(s.empty()){
        cout<<"no element inside the stack ";
        
    }
    else {
        cout<<"element here inside the stack";
    }
}
