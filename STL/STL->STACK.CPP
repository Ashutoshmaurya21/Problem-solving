#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;
    s.push("samrat");
    s.push("ashutosh");
    s.push("maurya");
    
    cout<<" size of string->"<<s.size()<<endl;
    
cout<<" the top element "<<s.top()<<endl;
s.pop();
cout<<" the top element "<<s.top()<<endl;
cout<<" stack is empty or not "<<s.empty()<<endl;


}
